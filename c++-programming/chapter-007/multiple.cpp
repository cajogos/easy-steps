#include <string>
#include <iostream>

using namespace std;

class Dog
{
	int age, weight;
	string color;

	public:
		void bark() { cout << "WOOF!" << endl << endl; }
		void setValues(int, int, string);
		int getAge() { return age; }
		int getWeight() { return weight; }
		string getColor() { return color; }
};

void Dog::setValues(int age, int weight, string color)
{
	this->age = age;
	this->weight = weight;
	this->color = color;
}

int main()
{
	Dog fido;

	fido.setValues(3, 15, "brown");

	cout << "Fido is a " << fido.getColor() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

	fido.bark();

	Dog pooch;

	pooch.setValues(4, 18, "gray");

	cout << "Pooch is a " << pooch.getColor() << " dog" << endl;
	cout << "Pooch is " << pooch.getAge() << " years old" << endl;
	cout << "Pooch weighs " << pooch.getWeight() << " pounds" << endl;

	pooch.bark();

	return 0;
}