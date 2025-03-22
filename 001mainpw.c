#include <stdio.h>

double a, b;
int mathIntDivide (int a, int b);
int mathRemainder (int a, int b);
double mathAdd (double a, double b);
double mathSubtract (double a, double b);
double mathMultiply (double a, double b);
double mathDivide (double a, double b);

int main () {
    char choice;

    do {
        printf("Input first number: ");
        scanf("%lf", &a);
        printf("Input second number: ");
        scanf("%lf", &b);

        printf("Pick your operator (+, -, *, /): ");
        scanf(" %c", &choice);

        switch (choice) {
            case '+':
                printf("Value: %.2lf\n", mathAdd(a, b));
                break;
            case '-':
                printf("Value: %.2lf\n", mathSubtract(a, b));
                break;
            case '*':
                printf("Value: %.2lf\n", mathMultiply(a, b));
                break;
            case '/':
                if (b != 0) {
                    printf("Value: %.2lf\n", mathDivide(a, b));
                    printf("Integer Division: %d\n", mathIntDivide((int)a, (int)b));
                    printf("Remainder: %d\n", mathRemainder((int)a, (int)b));
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please enter one of +, -, *, /.\n");
                break;
        }
        // To end the loop, the user must choose an operator that is not +, -, *, or /
    } while (choice == '+' || choice == '-' || choice == '*' || choice == '/');

    return 0;
}

double mathAdd (double a, double b) {
    return a + b;
}

double mathSubtract (double a, double b) {
    return a - b;
}

double mathMultiply (double a, double b) {
    return a * b;
}

double mathDivide (double a, double b) {
    return a / b;
}

int mathIntDivide (int a, int b) {
    return a / b;
}

int mathRemainder (int a, int b) {
    return a % b;
}
