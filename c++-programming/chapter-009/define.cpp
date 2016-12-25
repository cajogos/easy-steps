#define BOOK "C++ Programming in Easy Steps"
#define NUM 200
#define RULE "********************************************"

#include <iostream>

using namespace std;

int main()
{
	cout << RULE << endl << BOOK << endl << RULE;
	cout << endl << "NUM is: " << NUM << endl;
	cout << "Double NUM: " << ((NUM) * 2) << endl;

	return 0;
}