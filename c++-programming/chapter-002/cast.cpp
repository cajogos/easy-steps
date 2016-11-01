#include <iostream>

using namespace std;

int main()
{
	int num = 7, factor = 2;
	char letter = 'A'; float result = 0.0;

	cout << "Integer division: " << (num / factor) << endl;

	result = (float) (num) / factor;
	cout << "Cast division float: " << result << endl;

	num = static_cast <int> (letter);
	cout << "Cast character int: " << num << endl;

	letter = static_cast <char> (70);
	cout << "Cast integer char: " << letter << endl;

	return 0;
}