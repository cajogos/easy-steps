#include <iostream>

using namespace std;

class Parent
{
	public:
		Parent() { cout << "Default Parent constructor called."; }
		Parent(int a) { cout << endl << "Overloaded Parent constructor called."; }
};

class Daughter : public Parent
{
	public:
		Daughter() { cout << endl << "	Derived Daughter class default constructor called."; }
};

class Son : public Parent
{
	public:
		Son(int a) : Parent(a) { cout << endl << "	Derived Son class overloaded constructor called."; }
};

int main()
{
	Daughter emma;
	Son andrew(0);

	return 0;
}