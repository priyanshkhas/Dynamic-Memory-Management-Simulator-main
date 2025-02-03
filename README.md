# Memory Management System 🧠

## Overview 

The **Memory Management System** is a project that simulates a memory management mechanism using the buddy system approach. This system is designed to help users understand how memory allocation and deallocation can be managed efficiently in an operating system. The project includes both a command-line interface (CLI) program and a web-based application to demonstrate memory management in a visual and interactive manner.

## Project Components 

1. **Command-Line Interface (CLI) Application**: A C-based program that provides a text-based interface for managing memory. It allows users to initialize memory, allocate memory blocks, release memory blocks, and display the current memory layout.
   
2. **Web Application**: A dynamic web-based interface created using HTML, CSS, and JavaScript. This application provides a more intuitive and visual approach to managing memory blocks, allowing users to see the changes in memory layout in real-time.

## Features 

### Command-Line Interface (CLI)

- **Memory Initialization**: Start with a specified amount of memory that can be managed.
- **Allocate Memory**: Allocate memory blocks by specifying a size and a label.
- **Release Memory**: Free up allocated memory blocks by label.
- **Display Memory Layout**: View the current state of memory allocation and free blocks in a textual format.
- **User-Friendly Interaction**: A simple text-based menu guides users through various memory management operations.

### Web Application

- **Interactive User Interface**: An easy-to-use web interface that allows users to manage memory visually.
- **Real-Time Memory Visualization**: See immediate updates to the memory layout after performing operations like allocation and release.
- **Dynamic Operations**: Buttons for initializing memory, allocating, releasing, and resetting memory layout provide a seamless experience.
- **Responsive Design**: Built using Bootstrap, making the interface responsive and accessible on different devices.

## Current Design 

Here is a look at the design of the web application:

- **Initial Interface:**
  ![Initial Interface](https://github.com/omarbasha19/Dynamic-Memory-Management-Simulator/blob/main/photos/Screen%201.png?raw=true)

- **Memory Initialized:**
  ![Memory Initialized](https://github.com/omarbasha19/Dynamic-Memory-Management-Simulator/blob/main/photos/Screen%205.png?raw=true)

- **Memory Allocated:**
  ![Memory Allocated](https://github.com/omarbasha19/Dynamic-Memory-Management-Simulator/blob/main/photos/Screen%202.png?raw=true)

- **Multiple Allocations:**
  ![Multiple Allocations](https://github.com/omarbasha19/Dynamic-Memory-Management-Simulator/blob/main/photos/Screen%203.png?raw=true)

- **Memory Released:**
  ![Memory Released](https://github.com/omarbasha19/Dynamic-Memory-Management-Simulator/blob/main/photos/Screen%204.png?raw=true)

## How to Use 

### CLI Application

1. **Run the Program**: Compile and execute the program in a C environment.
2. **Initialize Memory**: Start by setting the total memory size.
3. **Manage Memory**: Use the provided menu to allocate and release memory blocks as needed.
4. **View Memory Layout**: Check the current status of memory to see allocated and free blocks.

### Web Application

1. **Open the Web Page**: Load the `os_website_.html` file in your web browser.
2. **Initialize Memory**: Enter the desired memory size and click "Initialize Memory."
3. **Allocate Memory**: Enter a label and size, then click "Allocate Memory" to reserve a block.
4. **Release Memory**: Enter the label of a block to release it back to the free memory pool.
5. **Reset Layout**: Click "Reset Memory Layout" to start over.

## Technologies Used 🛠️

- **C Programming Language**: For the CLI application.
- **HTML/CSS/JavaScript**: For the web-based interface.
- **Bootstrap**: For styling and responsive design in the web application.

## Conclusion 

The **Memory Management System** project offers a hands-on approach to understanding memory management concepts in both a CLI and a graphical environment. It provides users with an interactive way to learn how memory is managed in operating systems, making it an excellent educational tool.

