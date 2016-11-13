#include <iostream>

using namespace std;

void writeOutput(int&);
void computeTriple(int&);

int main()
{
	int num = 5;
	int& ref = num;
	
	writeOutput(ref);

	ref += 15;
	writeOutput(ref);

	computeTriple(ref);
	writeOutput(ref);

	return 0;
}

void writeOutput(int& value)
{
	cout << "Current value: " << value << endl;
}

void computeTriple(int& value)
{
	// Multiply and assign a referenced value
	value *= 3;
}