#include <stdio.h>

void calculator(int x, int y, char operation);

int main(void) {
    char option;
    
    do {
        int x;
        int y;
        char operation;

        printf("First Number: ");
        scanf("%d", &x);

        while (getchar() != '\n');

        printf("Operation (+, x, -, /): ");
        scanf(" %c", &operation);

        printf("Second Number: ");
        scanf("%d", &y);

        calculator(x, y, operation);

        printf("Terminate right now? (y - Yes, n - No): ");
        scanf(" %c", &option);
    } while (option != 'y');

    return 0;
}

void calculator(int x, int y, char operation) {
    switch (operation) {
        case '+':
            printf("Answer: %d\n", x + y);
            break;

        case 'x':
            printf("Answer: %d\n", x * y);
            break;

        case '-':
            printf("Answer: %d\n", x - y);
            break;

        case '/':
            if (y != 0) {
                printf("Answer: %.2f\n", (float)x / y);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operation: %c\n", operation);
    }
}
