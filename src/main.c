#include <stdio.h>
#include "calculator.h"

int main() {
    int a, b;
    char op;
    
    // Get input from the user
    printf("Enter an expression (e.g., 3 + 2): ");
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        printf("Invalid input!\n");
        return 1;
    }

    // Call the calculator function (note: there's a bug here)
    int result = calculate(a, b, op);
    
    printf("Result: %d\n", result);
    return 0;
}
