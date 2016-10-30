#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.1415926536;

	cout << "6\" circle circumference: " << (PI * 6) << endl;

	enum { RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };

	cout << "I shot a red worth: " << RED << endl;
	cout << "Then a blue worth: " << BLUE << endl;
	cout << "Total scored: " << (RED + BLUE) << endl;

	typedef enum { NEGATIVE, POSITIVE } charge;
	charge neutral = NEGATIVE, live = POSITIVE;
	cout << "Neutral wire: " << neutral << endl;
	cout << "Live wire: " << live << endl;

	return 0;
}