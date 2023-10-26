![Header Image](make.png)




# C - Makefiles

This project focuses on writing Makefiles, a build automation tool used for compiling and managing complex software projects. Makefiles help automate the compilation process and manage dependencies, making it easier to work with large codebases.

## Tests

- **Tests Folder**: This folder contains test files provided by Holberton School. These tests are used to evaluate the correctness of your Makefiles and the executables they produce.

## Helper Files

- **holberton.c**: This C function displays a seahorse in text. It's used for practice purposes throughout the project. The file is provided by Holberton School.

- **main.c**: The main C function that runs the function defined in holberton.c. This file is also provided by Holberton School.

## Header File

- **m.h**: This header file defines the function prototype used in school.c. It's provided by Holberton School and ensures that your code is using the correct function signatures and types.

## Tasks

### Task 0: make -f 0-Makefile

- **0-Makefile**: This Makefile creates an executable named "holberton" based on the source code in holberton.c and main.c. It includes a rule named "all" that builds the executable.

### Task 1: make -f 1-Makefile

- **1-Makefile**: In this task, you create a Makefile that builds the "holberton" executable based on holberton.c and main.c. It extends the previous Makefile by introducing the following variables:
  - **CC**: Defines the compiler to be used.
  - **SRC**: Defines the .c files to compile.
  The "all" rule ensures that only updated source files are recompiled.

### Task 2: make -f 2-Makefile

- **2-Makefile**: This Makefile creates the "holberton" executable based on holberton.c and main.c. It builds on the previous Makefile (1-Makefile) and introduces additional variables:
  - **OBJ**: Defines the .o files to compile.
  - **NAME**: Defines the name of the executable.

### Task 3: make -f 3-Makefile

- **3-Makefile**: In this task, you create a Makefile that builds the "holberton" executable based on holberton.c and main.c. Building on the previous Makefiles, this one introduces the following rules:
  - "clean": Deletes all Emacs and Vim temporary files and the executable.
  - "oclean": Deletes the object files.
  - "fclean": Deletes temporary files, the executable, and object files.
  - "re": Forces recompilation of all source files.
  - **RM**: Defines the command to delete files.

### Task 4: A complete Makefile

- **4-Makefile**: This Makefile creates the "holberton" executable based on holberton.c and main.c. It builds on the previous Makefiles, introducing the "CFLAGS" variable, which defines the compiler flags (-Wall -Werror -Wextra -pedantic).

### Task 5: Island Perimeter

- **5-island_perimeter.py**: This Python function returns the perimeter of an island defined in a grid. The function prototype is as follows:
  - Prototype: `def island_perimeter(grid):`
  The grid is represented as a list of lists of integers, with 0 indicating water and 1 indicating land. The function calculates the perimeter of the island based on these rules and requirements.

### Task 6: make -f 100-Makefile (Advanced)

- **100-Makefile**: This advanced Makefile creates the "holberton" executable based on holberton.c and main.c. It builds on the previous Makefiles but with specific constraints:
  - Does not define the variable "RM."
  - Never uses the string "$(CFLAGS)."
  - Does not compile if the header "m.h" is missing.
  - Works even if there are existing files with the same names as any of the Makefile rules in the current directory.

**Important Note**: It's essential to follow the guidelines and instructions provided in each task to ensure that your Makefiles and code meet the required specifications and constraints.

## Repository

- **GitHub Repository**: [alx-low_level_programming](https://github.com/fazzy12/alx-low_level_programming/tree/main/0x1C-makefiles)
- **Directory**: 0x1C-makefiles
