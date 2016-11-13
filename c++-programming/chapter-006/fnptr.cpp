#include <iostream>

using namespace std;

void writeOutput(int*);
void computeTriple(int*);

int main()
{
	int num = 5;
	int* ptr = &num;

	writeOutput(ptr);

	*ptr += 15; // Add and assign a deferenced value
	writeOutput(ptr);

	computeTriple(ptr);
	writeOutput(ptr);

	return 0;
}

void writeOutput(int* value)
{
	cout << "Current value: " << *value << endl;
}

void computeTriple(int* value)
{
	// Multiply and assign deferenced value
	*value *= 3;
}