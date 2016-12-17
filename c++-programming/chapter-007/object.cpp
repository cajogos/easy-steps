#include <string>
#include <iostream>

using namespace std;

class Dog
{
	int age, weight;
	string color;

	public:
		void bark() { cout << "WOOF!" << endl; }
		void setAge(int yrs) { age = yrs; }
		void setWeight(int lbs) { weight = lbs; }
		void setColor(string clr) { color = clr; }
		int getAge() { return age; }
		int getWeight() { return weight; }
		string getColor() { return color; }
};

int main()
{
	Dog fido;

	fido.setAge(3);
	fido.setWeight(15);
	fido.setColor("brown");

	cout << "Fido is a " << fido.getColor() << " dog" << endl;

	cout << "Fido is " << fido.getAge() << " years old" << endl;

	cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;

	fido.bark();

	return 0;
}