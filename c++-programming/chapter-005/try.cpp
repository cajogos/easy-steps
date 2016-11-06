#include <iostream>

using namespace std;

int main()
{
	int number;

	try
	{
		for (number = 1; number < 21; number++)
		{
			if (number > 4)
			{
				throw(number);
			}
			else
			{
				cout << "Number: " << number << endl;
			}
		}
	}
	catch (int num)
	{
		cout << "Exception at: " << num << endl;
	}

	return 0;
}