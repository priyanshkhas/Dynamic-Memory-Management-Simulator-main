
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LABEL_LEN 10

typedef struct Block {
    int size;
    char label[MAX_LABEL_LEN];
    int free;
    struct Block* next;
} Block;

Block* head = NULL;

Block* createBlock(int size, const char* label, int free) {
    Block* block = (Block*)malloc(sizeof(Block));
    block->size = size;
    strcpy(block->label, label);
    block->free = free;
    block->next = NULL;
    return block;
}

void initializeMemory(int size) {
    head = createBlock(size, "", 1);
}

void printMemory() {
    Block* current = head;
    printf("\nMemory Layout:\n");
    printf("---------------------------------\n");
    while (current != NULL) {
        printf("[%s %dK %s] -> ", current->label, current->size, current->free ? "Free" : "Allocated");
        current = current->next;
    }
    printf("NULL\n");
    printf("---------------------------------\n");
}

void splitBlock(Block* block, int size) {
    while (block->size / 2 >= size) {
        Block* buddy = createBlock(block->size / 2, "", 1);
        buddy->next = block->next;
        block->next = buddy;
        block->size /= 2;
    }
}

void allocateMemory(const char* label, int size) {
    Block* current = head;
    Block* bestFit = NULL;

    while (current != NULL) {
        if (current->free && current->size >= size) {
            if (bestFit == NULL || current->size < bestFit->size) {
                bestFit = current;
            }
        }
        current = current->next;
    }

    if (bestFit != NULL) {
        splitBlock(bestFit, size);
        strcpy(bestFit->label, label);
        bestFit->free = 0;
    } else {
        printf("Allocation failed: Not enough memory.\n");
    }
}

void mergeBlocks() {
    Block* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->free && current->next->free && current->size == current->next->size) {
            Block* buddy = current->next;
            current->size *= 2;
            current->next = buddy->next;
            free(buddy);
        } else {
            current = current->next;
        }
    }
}

void releaseMemory(const char* label) {
    Block* current = head;
    while (current != NULL) {
        if (!current->free && strcmp(current->label, label) == 0) {
            current->free = 1;
            strcpy(current->label, "");
            break;
        }
        current = current->next;
    }
    mergeBlocks();
}

void menu() {
    printf("\nMemory Management System\n");
    printf("1. Allocate Memory\n");
    printf("2. Release Memory\n");
    printf("3. Print Memory Layout\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int memorySize, choice, size;
    char label[MAX_LABEL_LEN];

    printf("Enter the memory size in KB: ");
    scanf("%d", &memorySize);

    initializeMemory(memorySize);
    printMemory();

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Exiting...\n");
                exit(0);
            case 1:
                printf("Enter label: ");
                scanf("%s", label);
                printf("Enter size in KB: ");
                scanf("%d", &size);
                allocateMemory(label, size);
                printMemory();
                break;
            case 2:
                printf("Enter label to release: ");
                scanf("%s", label);
                releaseMemory(label);
                printMemory();
                break;
            case 3:
                printMemory();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
