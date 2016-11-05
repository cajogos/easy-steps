#include <string>
#include <iostream>

using namespace std;

int main()
{
	string front;
	string back;
	string text = "Always laugh when you can. It\'s cheap medicine.";

	front.assign(text);
	cout << endl << "Front: " << front << endl;

	// Copy the first 27 characters of the initialized variable to the first variable
	front.assign(text, 0, 27);
	cout << endl << "Front: " << front << endl;

	back.assign(text, 27, text.size());
	cout << "Back: " << back << endl;

	back.swap(front);
	cout << endl << "Front: " << front << endl;
	cout << "Back: " << back << endl;

	return 0;
}