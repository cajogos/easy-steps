#include <iostream>

using namespace std;

class Parent
{
public:
	void Common() const
	{
		cout << "I am part of this family. ";
	}

	virtual void Identify() const
	{
		cout << "I am the parent." << endl;
	}
};

class Child : public Parent
{
public:
	void Identify() const
	{
		cout << "I am the child." << endl;
	}
};

class Grandchild : public Child
{
public:
	void Identify() const
	{
		cout << "I am the Grandchild." << endl;
	}

	void Relate() const
	{
		cout << "Grandchild has parent and grandparent.";
	}
};

int main()
{
	Child son;
	Grandchild grandson;
	Parent* ptrChild = &son;
	Parent* ptrGrandchild = &grandson;

	ptrChild->Common(); // Inherited
	ptrChild->Identify(); // Overriding

	ptrGrandchild->Common(); // Inherited
	ptrGrandchild->Identify(); // Overriding

	ptrChild->Parent::Common(); // Explicit
	ptrChild->Parent::Identify(); // Explicit

	grandson.Relate(); // Via instance

	return 0;
}