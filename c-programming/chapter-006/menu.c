#include <stdio.h>

void menu();
void action();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int option;
	printf("\n\tWhat would you like to do?");
	printf("\n\t1. Square a number");
	printf("\n\t2. Multiply two numbers");
	printf("\n\t3. Exit\n");

	scanf("%d", &option);
	action(option);
}