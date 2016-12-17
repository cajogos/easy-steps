#include <string>
#include <iostream>

using namespace std;

class Dog
{
	int age, weight;
	string color;

	public:
		void bark() { cout << "WOOF!" << endl << endl; }
		Dog(int, int, string);
		~Dog();
		int getAge() { return age; }
		int getWeight() { return weight; }
		string getColor() { return color; }
};

Dog::Dog(int age, int weight, string color)
{
	this->age = age;
	this->weight = weight;
	this->color = color;
}

Dog::~Dog()
{
	cout << "Object destroyed." << endl;
}

int main()
{
	Dog fido(3, 15, "brown");

	cout << "Fido is a " << fido.getColor() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

	fido.bark();

	Dog pooch(4, 18, "gray");

	cout << "Pooch is a " << pooch.getColor() << " dog" << endl;
	cout << "Pooch is " << pooch.getAge() << " years old" << endl;
	cout << "Pooch weighs " << pooch.getWeight() << " pounds" << endl;

	pooch.bark();

	return 0;
}