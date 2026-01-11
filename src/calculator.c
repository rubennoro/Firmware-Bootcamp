#include <stdio.h>
#include "calculator.h"

// Function to calculate the result of an operation
int calculate(int a, int b, char op) {
    int result;

    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            // Bug: No proper error handling for unsupported operations
            result = 0;
    }
    
    return result;
}
