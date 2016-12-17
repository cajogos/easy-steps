#include <string>
#include <iostream>

using namespace std;

class Dog
{
	int age, weight;
	string color;

	public:
		void bark() { cout << "WOOF!" << endl << endl; }
		void bark(string noise) { cout << noise << endl << endl; }
		Dog(int, int, string);
		Dog();
		Dog(int, int);
		~Dog();
		int getAge() { return age; }
		int getWeight() { return weight; }
		string getColor() { return color; }
};

Dog::Dog()
{
	age = 1;
	weight = 2;
	color = "black";
}

Dog::Dog(int age, int weight)
{
	this->age = age;
	this->weight = weight;
	color = "white";
}

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
	Dog rex;

	cout << "Rex is a " << rex.getColor() << " dog" << endl;
	cout << "Rex is " << rex.getAge() << " years old" << endl;
	cout << "Rex weighs " << rex.getWeight() << " pounds" << endl;

	rex.bark("GRRR!");

	Dog sammy(2, 6);

	cout << "Sammy is a " << sammy.getColor() << " dog" << endl;
	cout << "Sammy is " << sammy.getAge() << " years old" << endl;
	cout << "Sammy weighs " << sammy.getWeight() << " pounds" << endl;

	sammy.bark("BOWOW!");

	return 0;
}