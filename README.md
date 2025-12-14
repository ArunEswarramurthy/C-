# Module 01: Introduction to C++

## 1. What is C++?
C++ is a high-performance, general-purpose programming language created by **Bjarne Stroustrup** at Bell Labs in 1979. It was designed as an extension of the C language to include **object-oriented features**, initially named "C with Classes".

It is a **compiled**, **statically typed**, **case-sensitive**, and **free-form** language that supports multiple programming paradigms:
*   **Procedural Programming**
*   **Object-Oriented Programming (OOP)**
*   **Generic Programming (Templates)**
*   **Functional Programming (Lambda expressions in modern C++)**

## 2. Why Learn C++?
*   **Performance**: C++ allows direct memory manipulation and low-level optimization, making it faster than languages like Python or Java.
*   **System Programming**: Used for Operating Systems (Windows, macOS), Drivers, and Embedded Systems.
*   **Game Development**: The dominant language for game engines (Unreal Engine uses C++).
*   **Scalability**: Powers large systems like Google Search, Amazon, and Facebook backends.
*   **Control**: Gives you total control over system resources and memory management.

## 3. History & Standards
The C++ standard is maintained by the **ISO (International Organization for Standardization)**.

| Version | Year | Key Features |
| :--- | :--- | :--- |
| **C++98** | 1998 | First standardized version. Templates, STL, Exceptions. |
| **C++03** | 2003 | Minor bug fixes. |
| **C++11** | 2011 | **Major Update ("Modern C++")**. `auto`, lambdas, smart pointers, range-based loops. |
| **C++14** | 2014 | Small improvements to C++11 features. |
| **C++17** | 2017 | Filesystem library, parallel algorithms, `std::optional`. |
| **C++20** | 2020 | **Major Update**. Concepts, Modules, Ranges, Coroutines. |
| **C++23** | 2023 | Library improvements, `std::expected`, `this` deduction. |

## 4. How C++ Compilation Works
Unlike Python (interpreted), C++ code must be **compiled** into machine code before execution.

1.  **Preprocessor**: Handles directives starting with `#` (e.g., `#include`). Copies header files into source.
2.  **Compiler**: Translates C++ code into **Assembly** code. Checks for syntax errors.
3.  **Assembler**: Converts Assembly into **Object Code** (`.o` or `.obj` files).
4.  **Linker**: Combines object files and libraries to create a single **Executable** (`.exe` or `.out`).

---

## 5. Setting Up Environment (Windows)
We use **Visual Studio Code** (Editor) and **MinGW-w64** (Compiler).

### Check if installed:
Open terminal (`Ctrl + ~`) and type:
```bash
g++ --version
```
If you see a version number (e.g., `g++ (MinGW-w64) ...`), you are ready.

---

## 6. Your First C++ Program: "Hello World"

Create a file named `hello.cpp`:

```cpp
#include <iostream>  // Header for Input/Output

// Main entry point of the program
int main() {
    // Print text to the console
    std::cout << "Hello, World!" << std::endl;
    
    // Return 0 indicates successful execution
    return 0;
}
```

### 🧠 Code Breakdown
*   `#include <iostream>`:
    *   `#`: Preprocessor directive.
    *   `include`: Tells compiler to include a file.
    *   `<iostream>`: Standard Input/Output Stream Library. Contains definitions for `cout` and `cin`.
*   `int main() { ... }`:
    *   The entry point of every C++ program. Execution starts here.
    *   Returns an `integer` to the Operating System.
*   `{ ... }`: Defines a **Block** of code.
*   `std::cout`:
    *   `std`: The **Namespace** (Standard). Prevents naming conflicts.
    *   `cout`: **Character Output**. Represents the console/screen.
    *   `<<`: **Insertion Operator**. Pushes data into the stream.
*   `"Hello, World!"`: A **String Literal**.
*   `std::endl`: Inserts a newline character and flushes the buffer (similar to `\n`).
*   `;`: **Statement Terminator**. Every statement must end with a semicolon.
*   `return 0;`:
    *   Returns value `0` to OS.
    *   `0` conventionally means "Success". Any non-zero value means "Error".

---

## 7. Comments
Comments are ignored by the compiler. Used for documentation.

```cpp
// This is a Single-line comment

/*
   This is a
   Multi-line comment
*/
```

## 8. Basic Syntax Rules
1.  **Case Sensitive**: `main`, `Main`, and `MAIN` are different.
2.  **Semicolons**: Mandatory at end of statements. Missing one is a syntax error.
3.  **Whitespaces**: Ignored by compiler (mostly). Use indentation for readability.
4.  **Quotes**:
    *   Double quotes `" "` for **Strings** ("Hello").
    *   Single quotes `' '` for **Characters** ('A').

---

## ✅ Practice Task
1.  Create a folder `01_Introduction`.
2.  Create a file `main.cpp`.
3.  Write the "Hello World" program.
4.  Compile and run it using the terminal:
    ```bash
    g++ main.cpp -o main
    ./main
    ```
5.  Try modifying the text inside `""` to print your name.
