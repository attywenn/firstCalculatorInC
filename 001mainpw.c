#include <stdio.h>

double a, b;
int value;
double mathAdd (double a, double b);
double mathSubtract (double a, double b);
double mathMultiply (double a, double b);
double mathDivide (double a, double b);
int mathIntDivide (int a, int b);
int mathRemainder (int a, int b);

int main () {
	char choice;
	
	a = 5;
	b = 10;
	value = a, b;

		do {
			printf("Input first number: ");
			scanf(" %lf", &a);
			printf("Input second number: ");
			scanf(" %lf", &b);
			
			printf("Pick your operator (+, -, *, /): ");
			scanf(" %c", &choice);

			switch (choice) {
				case '+':
					printf("Value: %.2lf\n", mathAdd(a, b));
					mathAdd(a, b);
					break;
				case '-':
					printf("Value: %.2lf\n", mathSubtract(a,b));
					mathSubtract(a, b);
					break;
				case '*':
					printf("Value: %.2lf\n", mathMultiply(a, b));
					mathMultiply(a, b);
					break;
				case '/':
					printf("Value: %.2lf\vValue: %d r. %d\n", mathDivide(a, b), mathIntDivide(a, b), mathRemainder(a, b));
					mathDivide(a, b);
					mathRemainder(a, b);
					break;
			} 
		} while (choice != '+' && '-' && '*' && '/');
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

int mathRemainder (int a, int b) {
	return a % b;
}

int mathIntDivide (int a, int b) {
	return a / b;
}
