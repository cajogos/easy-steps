#include <string>
#include <iostream>

using namespace std;

int main()
{
	string text = "I can resist anything but temptation.";
	int num;

	num = text.find("resist", 0);
	cout << "Position: " << num << endl;

	num = text.find("nonsuch", 0);
	cout << "Result: " << num << endl;

	num = text.find_first_of("If", 0);
	cout << "First I: " << num << endl;

	num = text.find_first_not_of("If");
	cout << "First not I: " << num << endl;

	num = text.find_last_of("t");
	cout << "Last t: " << num << endl;

	num = text.find_last_not_of("t");
	cout << "Last not t: " << num << endl;

	return 0;
}