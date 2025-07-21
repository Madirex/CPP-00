# C++ Module 00: Foundations and Basic Classes

This repository contains the solutions for Module 00 of the C++ curriculum. This foundational module introduces the basic syntax and concepts of Object-Oriented Programming (OOP) in C++, transitioning from C-style programming to a class-based approach.

---

## Core Concepts Covered

This module explores the following key topics:

-   **Namespaces**: Understanding the purpose of namespaces, particularly the `std` namespace.
-   **Classes and Member Functions**: Defining classes, implementing member functions, and distinguishing between public and private access.
-   **Standard I/O Streams**: Using `std::cout` and `std::cin` for input and output, replacing C's `printf` and `scanf`.
-   **Initialization Lists**: Properly initializing class member variables in constructors.
-   **Static and Const**: Understanding the use of `static` and `const` within the context of classes.
-   **Basic String Manipulation**: Working with the `std::string` class and formatting output with `<iomanip>`.

---

## Exercise Breakdown

### `ex00: Megaphone`
-   **Goal**: A simple warm-up exercise to practice handling command-line arguments and performing basic string manipulation using C++ I/O streams.

### `ex01: My Awesome PhoneBook`
-   **Goal**: To build a complete, interactive program using classes (`PhoneBook`, `Contact`). This exercise focuses on class design, managing a fixed-size array of objects, and handling formatted user input and output.

### `ex02: The Job Of Your Dreams`
-   **Goal**: A reverse-engineering challenge. The task is to re-implement a missing `.cpp` file (`Account.cpp`) based on its provided header file and a log of its expected output, demonstrating an understanding of class behavior from its public interface.

---

## How to Compile and Run

Each exercise is contained in its own directory (`ex00`, `ex01`, etc.) and includes a `Makefile`.

1.  **Navigate to an exercise directory**:
    ```bash
    cd ex00
    ```

2.  **Compile the project**:
    ```bash
    make
    ```

3.  **Run the executable**:
    The executable name is specified in the `Makefile` for each exercise.
    ```bash
    ./megaphone "hello world"
    ```

4.  **Clean up**:
    -   `make clean`: Removes the intermediate object files (`.o`).
    -   `make fclean`: Removes object files and the final executable.
    -   `make re`: Cleans and rebuilds the project.

All projects are compiled using `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
