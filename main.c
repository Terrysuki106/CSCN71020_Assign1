#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();

int main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf("%d", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		break;

	case 2:
		subtract();
		break;
	}

	return 0;
}


void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf("%lf", &num1);
	printf("Enter the second value:");
	scanf("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	double num1, num2, result;
	printf("Enter the first value: ");
	scanf("%lf", &num1);
	printf("Enter the second value: ");
	scanf("%lf", &num2);
	result = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result);
}