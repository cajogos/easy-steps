#include <iostream>

using namespace std;

class Base
{
public:
	void Identify(int adr) const
	{
		cout << "Base class called by 0x" << hex << adr << endl;
	}
};

class SubA : public Base {};
class SubB : public Base {};

int main()
{
	Base* ptrA = new SubA;
	Base* ptrB = new SubB;

	ptrA->Identify((int) &ptrA);
	ptrB->Identify((int) &ptrB);

	return 0;
}