# Command-Line Calculator Project

## Introduction
This project is a simple command-line calculator that performs basic operations: addition, subtraction, multiplication, and division.

### How to Build the Project:

1. Clone the repository to your local machine.
2. Open a terminal and navigate to the project directory.
3. Create a new build directory:

    ```bash
    mkdir build
    cd build
    ```

4. Run CMake to generate the build system:

    ```bash
    cmake ..
    ```

5. Compile the project using `make`:

    ```bash
    make
    ```

6. Run the calculator:

    ```bash
    ./calculator
    ```

    You should be prompted to enter an expression like `3 + 2`.

---

## Known Issues and Tasks:

There are a few bugs and missing components that need fixing. Please address these issues:

### 1. **Function Prototypes Missing**
   - The `calculator.h` file is missing the proper function prototypes for the `calculate` function.
     - **Fix**: Add the function prototype for `calculate` in `calculator.h`.

### 2. **Error Handling for Invalid Operations**
   - The `calculate` function does not handle invalid operations properly. If an unsupported operation is provided (e.g., `^`), the program will still return `0` without giving feedback.
     - **Fix**: Add a check for invalid operations and print an error message if the user inputs an unsupported operator.

### 3. **Division by Zero**
   - The `calculate` function has a division operation (`/`) but does not check for division by zero.
     - **Fix**: Check if `b` is `0` before performing the division and handle the error (e.g., print a message like "Cannot divide by zero").

### 4. **Precision with Division**
   - The result of a division is being returned as an integer, so it will truncate any decimal points. To make the calculator more accurate, consider changing the type of `a`, `b`, and the return type of `calculate` to `float` or `double`.
     - **Fix**: Change the function signature and variable types in `main.c` and `calculator.c` to `float` or `double` for accurate division.

---

### 5. **Optional Improvements**
- Add support for more operations, such as modulus (`%`), exponentiation, or even trigonometric functions (like `sin`, `cos`, `tan`).
- Use a loop to allow multiple calculations instead of just one.
- Add better input validation, such as checking if the operator is actually a character, and checking for numeric inputs.

---

## Example Usage:

Run the program and input a valid mathematical expression like the following:

