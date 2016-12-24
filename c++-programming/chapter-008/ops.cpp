#include "ops.h" // Reference header file
#include <iostream>

using namespace std;

Calculator::Calculator()
{
	status = true;
}

void Calculator::launch() // Display instructions
{
	cout << endl << "*** SUM CALCULATOR ***" << endl;
	cout << "Enter a number, an operator (+, -, *, /), and another number." << endl << "Hit Return to calculate. Enter zero to exit." << endl;
}

void Calculator::readInput() // Get expression
{
	cout << "> ";
	cin >> num1; // Get first number
	if (num1 == 0)
	{
		status = false;
	}
	else
	{
		cin >> oper;
		cin >> num2;
	}
}

void Calculator::writeOutput() // Display result
{
	if (status)
	{
		switch (oper)
		{
			case '+': { cout << (num1 + num2) << endl; break; }
			case '-': { cout << (num1 - num2) << endl; break; }
			case '*': { cout << (num1 * num2) << endl; break; }
			case '/':
				if (num2 != 0)
				{
					cout << (num1 / num2) << endl;
				}
				else
				{
					cout << "Cannot divide by zero" << endl;
				}
		}
	}
}

bool Calculator::run()
{
	return status;
}