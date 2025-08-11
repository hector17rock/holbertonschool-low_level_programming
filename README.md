# 🚀 Holberton School - Low Level Programming

[![C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Betty Style](https://img.shields.io/badge/code%20style-Betty-brightgreen.svg)](https://github.com/hs-hq/Betty)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

> **A comprehensive collection of C programming projects covering fundamental low-level programming concepts**

This repository contains a complete curriculum of low-level programming exercises and projects written in C, covering everything from basic syntax to advanced concepts like data structures and system programming.

## 📚 Table of Contents

- [About](#-about)
- [Learning Objectives](#-learning-objectives)
- [Repository Structure](#️-repository-structure)
- [Project Descriptions](#-project-descriptions)
- [Getting Started](#-getting-started)
- [Compilation](#️-compilation)
- [Testing](#-testing)
- [Coding Standards](#-coding-standards)
- [Resources](#-resources)
- [Author](#-author)
- [License](#-license)

## 🎯 About

This repository contains **16 comprehensive projects** with over **229 C programs** and **19 header files**, representing a complete journey through low-level programming fundamentals. Each project builds upon previous concepts while introducing new programming paradigms and advanced C language features.

The curriculum follows a progressive learning path designed to develop strong foundational skills in:
- **System Programming** 🖥️
- **Memory Management** 🧠  
- **Data Structures** 📊
- **Algorithm Implementation** ⚡
- **File I/O Operations** 📁

## 🎓 Learning Objectives

By completing this curriculum, you will master:

### **Core Programming Concepts**
- C programming language fundamentals
- Compilation process and GCC usage
- Debugging techniques and tools
- Code optimization principles

### **Memory Management**
- Dynamic memory allocation (`malloc`, `free`)
- Memory leaks prevention
- Pointer arithmetic and manipulation
- Stack vs Heap memory concepts

### **Data Structures**
- Arrays and strings manipulation
- Linked lists (singly and doubly)
- Structure and union definitions
- Complex data type handling

### **Advanced Topics**
- Function pointers and callbacks
- Variadic functions
- File input/output operations
- Bit manipulation techniques
- Recursion and algorithmic thinking

## 🗂️ Repository Structure

```
holbertonschool-low_level_programming/
├── 📁 hello_world/              # Introduction to C programming
├── 📁 variables_if_else_while/  # Variables, conditions, and loops
├── 📁 functions_nested_loops/   # Functions and nested loops
├── 📁 more_functions_nested_loops/ # Advanced functions and loops
├── 📁 pointers_arrays_strings/  # Pointers, arrays, and strings
├── 📁 recursion/                # Recursive functions
├── 📁 malloc_free/              # Dynamic memory allocation
├── 📁 more_malloc_free/         # Advanced memory management
├── 📁 structures_typedef/       # Structures and type definitions
├── 📁 function_pointers/        # Function pointers
├── 📁 variadic_functions/       # Variable argument functions
├── 📁 singly_linked_lists/      # Single linked list implementation
├── 📁 doubly_linked_lists/      # Double linked list implementation
├── 📁 bit_manipulation/         # Bit operations and manipulation
├── 📁 file_io/                  # File input/output operations
├── 📁 argc_argv/                # Command line arguments
└── 📄 README.md                 # This file
```

## 📋 Project Descriptions

### 🔰 **Fundamentals** (Projects 0-3)

#### **0x00. Hello, World**
- Introduction to C compilation process
- First C programs using `printf` and `puts`
- Understanding preprocessor, compiler, assembler, and linker
- **Files**: 10 programs covering basic output and compilation

**Example:** `4-puts.c`
```c
#include <stdio.h>
/**
 * main - Entry point
 * Return: Return 0 when done.
 */
int main(void)
{
    puts("\"Programming is like building a multilingual puzzle");
    return (0);
}
```

#### **0x01. Variables, if, else, while**
- Variable declarations and assignments
- Conditional statements (`if`, `else`, `else if`)
- Loop constructs (`while`, `for`)
- **Files**: 14 programs practicing control structures

#### **0x02. Functions and nested loops**
- Function declarations and definitions
- Local vs global scope
- Header files and prototypes
- **Files**: 43 programs with extensive function practice

#### **0x03. More functions, more nested loops**
- Advanced function concepts
- Nested loop optimization
- Mathematical computations
- **Files**: 41 programs with complex algorithms

### 🧠 **Memory & Data Structures** (Projects 4-8)

#### **0x04. Pointers, arrays and strings**
- Pointer fundamentals and arithmetic
- Array manipulation techniques
- String processing functions
- **Files**: 73 programs covering pointer concepts

**Example:** `0-reset_to_98.c`
```c
#include "main.h"

/**
 * reset_to_98 - updates the value of an integer to 98
 * @n: pointer to the integer to be updated
 */
void reset_to_98(int *n)
{
    *n = 98; /* Dereference the pointer and set the value to 98 */
}
```

#### **0x05. Recursion**
- Recursive function design
- Base cases and recursive cases
- Mathematical sequences and algorithms
- **Files**: 35 programs exploring recursion

**Example:** `0-puts_recursion.c`
```c
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s + 1);
}
```

#### **0x06. malloc, free**
- Dynamic memory allocation
- Memory management best practices
- Creating arrays and strings at runtime
- **Files**: 28 programs focusing on heap memory

**Example:** `0-create_array.c`
```c
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char
 * @size: The size of the array to be created
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = malloc(size * sizeof(char));
    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
```

#### **0x07. More malloc, free**
- Advanced memory allocation patterns
- Memory debugging techniques
- Complex data structure allocation
- **Files**: 23 programs with advanced memory management

#### **0x08. Structures, typedef**
- Custom data type creation
- Structure member access
- Type definitions and aliases
- **Files**: 24 programs working with structures

### ⚡ **Advanced Concepts** (Projects 9-13)

#### **0x09. Function pointers**
- Function pointer declarations
- Callback function implementation
- Dynamic function selection
- **Files**: 25 programs utilizing function pointers

#### **0x0A. Variadic functions**
- Variable argument functions
- `va_list`, `va_start`, `va_arg` macros
- Flexible parameter handling
- **Files**: 21 programs with variadic functions

#### **0x0B. Singly linked lists**
- Linked list implementation
- Node creation and deletion
- List traversal and manipulation
- **Files**: 27 programs building linked lists

**Example:** `0-print_list.c`
```c
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        count++;
    }

    return (count);
}
```

#### **0x0C. Doubly linked lists**
- Bidirectional linked lists
- Advanced list operations
- Memory efficient implementations
- **Files**: 44 programs with doubly linked lists

#### **0x0D. Bit manipulation**
- Binary number operations
- Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
- Low-level data manipulation
- **Files**: 28 programs exploring bit operations

### 🎯 **System Programming** (Projects 14-15)

#### **0x0E. File I/O**
- File handling operations
- Reading from and writing to files
- File descriptors and system calls
- **Files**: 22 programs working with files

#### **0x0F. argc, argv**
- Command line argument processing
- Program parameter handling
- Main function variations
- **Files**: 21 programs using command line arguments

## 🚀 Getting Started

### Prerequisites

- **Operating System**: Linux (Ubuntu 14.04 LTS or later recommended)
- **Compiler**: GCC 4.8.4 or later
- **Editor**: Any text editor (vi/vim, emacs, nano, VS Code)
- **Tools**: Betty linter for code style checking

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/hector17rock/holbertonschool-low_level_programming.git
   cd holbertonschool-low_level_programming
   ```

2. **Install Betty (Code Style Checker)**
   ```bash
   git clone https://github.com/hs-hq/Betty.git
   cd Betty
   sudo ./install.sh
   ```

3. **Verify GCC installation**
   ```bash
   gcc --version
   ```

## ⚙️ Compilation

### Standard Compilation
All programs are compiled using GCC with specific flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
```

### Compilation Flags Explained
- `-Wall`: Enable all common warning messages
- `-Werror`: Treat warnings as errors
- `-Wextra`: Enable extra warning messages
- `-pedantic`: Ensure ISO C compliance
- `-std=gnu89`: Use GNU89 C standard

### Example Compilation
```bash
# Compile a simple program
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c program.c -o my_program

# Run the program
./my_program
```

## 🧪 Testing

### Running Individual Programs
```bash
cd project_directory
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test
./test
```

### Using Provided Test Files
Most projects include main.c files for testing:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c program.c -o test
./test
```

### Memory Testing with Valgrind
```bash
# Install valgrind (if not already installed)
sudo apt-get install valgrind

# Check for memory leaks
valgrind --leak-check=full --show-leak-kinds=all ./your_program
```

## 📏 Coding Standards

This repository follows the **Betty coding style**, the official C coding standard for Holberton School.

### Key Betty Style Guidelines

#### **Indentation and Spacing**
- Use tabs (8 spaces) for indentation
- No trailing whitespace
- Lines should not exceed 80 characters

#### **Naming Conventions**
- Variable names: `snake_case`
- Function names: `snake_case`
- Constants: `UPPER_CASE`
- Structure names: `snake_case`

#### **Function Guidelines**
- Maximum 40 lines per function
- Maximum 5 functions per file
- Functions should have a single, clear purpose

#### **Code Examples**

**✅ Good Style:**
```c
/**
 * add_numbers - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int add_numbers(int a, int b)
{
    return (a + b);
}
```

**❌ Bad Style:**
```c
int addNumbers(int a,int b){
return a+b;}
```

### Betty Checker Usage
```bash
# Check a single file
betty filename.c

# Check all C files in current directory
betty *.c
```

## 📖 Resources

### **Official Documentation**
- [The C Programming Language (K&R)](https://www.amazon.com/Programming-Language-Brian-Kernighan/dp/0131103628)
- [GNU GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/)

### **Online Learning Resources**
- [Learn C Programming](https://www.learn-c.org/)
- [C Programming Tutorial](https://www.cprogramming.com/)
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)

### **Development Tools**
- [GDB Debugger](https://www.gnu.org/software/gdb/)
- [Valgrind Memory Debugger](https://valgrind.org/)
- [Betty Style Checker](https://github.com/hs-hq/Betty)

### **Additional References**
- [C Standard Library Reference](https://www.cplusplus.com/reference/clibrary/)
- [Linux System Calls](https://man7.org/linux/man-pages/man2/syscalls.2.html)
- [Memory Management in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

## 👨‍💻 Author

**Hector Soto**

- 🐱 **GitHub**: [@hector17rock](https://github.com/hector17rock)
- 📧 **Email**: [Contact via GitHub](https://github.com/hector17rock)
- 🎓 **Institution**: Holberton School
- 💼 **Role**: Full-Stack Software Development Student
- 🌍 **Location**: Currently studying low-level programming fundamentals

### About the Author
Passionate about software development with a focus on system programming and low-level optimization. This repository represents a comprehensive journey through C programming fundamentals, demonstrating progression from basic syntax to advanced concepts like memory management and data structures.

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🤝 Contributing

While this repository primarily serves as a learning portfolio, feedback and suggestions are welcome:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/improvement`)
3. Commit your changes (`git commit -am 'Add some improvement'`)
4. Push to the branch (`git push origin feature/improvement`)
5. Create a Pull Request

## 🙏 Acknowledgments

- **Holberton School** for providing comprehensive curriculum and learning environment
- **Betty Style Guide** contributors for maintaining code quality standards
- **The C Programming Community** for extensive documentation and resources
- **Fellow Students** for collaboration and peer learning opportunities

---

<div align="center">

### 🌟 **"First, solve the problem. Then, write the code."** 🌟

**Made with ❤️ by [Hector Soto](https://github.com/hector17rock)**

</div>
