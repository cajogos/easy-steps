#include <iostream>

using namespace std;

int computeFactorials(int, int);
inline int factorial(int n)
{
	return (n == 1) ? 1 : (factorial(n - 1) * n);
}

int main()
{
	computeFactorials(1, 8);
	return 0;
}

int computeFactorials(int num, int max)
{
	cout << "Factorial of " << num << ": ";
	cout << factorial(num) << endl; // Statements
	num++; // Incrementer
	if (num > max)
	{
		return 0; // Exit
	}
	else
	{
		computeFactorials(num, max); // or call again
	}
}

// int factorial(int n)
// {
// 	int result;
// 	if (n == 1)
// 	{
// 		result = 1; // Exit or...
// 	}
// 	else
// 	{
// 		result = (factorial(n - 1) * n); // Decrement
// 	}
// 	return result;
// }