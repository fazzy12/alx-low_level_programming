![](giphy-3.gif)

# ALX Low Level Programming - Singly Linked Lists

## Project Overview
This project focuses on implementing singly linked lists in C, a fundamental data structure in computer science. The tasks involve creating, manipulating, and freeing nodes in a singly linked list, as well as performing certain operations before the main function executes and writing a program in assembly language.

## Description
A singly linked list is a data structure that consists of a sequence of elements, each containing a reference (link) to the next element in the sequence. This project includes the following tasks:

- Creating nodes and adding them to the beginning or end of the list.
- Printing the elements of the list.
- Freeing the allocated memory.
- Performing operations before the main function executes.
- Writing an assembly program to print a specific message

## Files
The project includes the following files:

- lists.h: Header file containing the function prototypes and the definition of the list_t struct.
- **0-print_list.c**: Function to print all elements of a list.
- **1-list_len.c**: Function to return the number of elements in a list.
- **2-add_node.c**: Function to add a new node at the beginning of a list.
- **3-add_node_end.c**: Function to add a new node at the end of a list.
- **4-free_list.c**: Function to free a list.
- **100-first.c**: Function to print a message before the main function executes.
- **101-hello_holberton.asm**: Assembly program to print "Hello, Holberton".
- **0-main.c**, **1-main.c**, **2-main.c**, **3-main.c**, **4-main.c**, **100-main.c**: Test files for the respective tasks

## Compilation and Testing
To compile and test the C programs, use the following commands:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [MAIN_FILE] [FUNCTION_FILE] -o [OUTPUT_FILE]
```

For example, to compile and test 2-add_node.c:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c -o add_node
./add_node

```
To compile and run the assembly program:
```
nasm -f elf64 101-hello_holberton.asm -o 101-hello_holberton.o
gcc -nostartfiles -no-pie 101-hello_holberton.o -o hello -lc
./hello
```

## Task Breakdown
### Mandatory Tasks
1. Print list: Write a function that prints all elements of a list.
2. List length: Write a function that returns the number of elements in a list.
3. Add node: Write a function that adds a new node at the beginning of a list.
4. Add node  at the end: Write a function that adds a new node at the end of a list.
5. Free list: Write a function that frees a list.

### Advanced Tasks
6. The Hare and the Tortoise: Write a function that prints a message before the main function executes.
7. Real programmers can write assembly code in any language: Write a 64-bit program in assembly that prints "Hello, Holberton".

## Usage

To use the linked list functions in your own programs, include the `lists.h` header file and compile your program with the necessary function files. Here is an example of using the `add_node_end` function:

```
#include "lists.h"
#include <stdlib.h>

int main(void)
{
    list_t *head = NULL;

    add_node_end(&head, "Holberton");
    print_list(head);

    free_list(head);
    return (0);
}

```

Compile and run:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c 3-add_node_end.c 0-print_list.c 4-free_list.c -o my_program
./my_program

```

## Author
This project was completed by [Your Name]. If you have any questions or suggestions, feel free to reach out.

