#include <vector> // Include vector support
#include <iostream>

using namespace std;

int main()
{
	vector <int> vec(10);
	int i = 0;

	while (i < vec.size())
	{
		i++; // Increment the counter
		vec[i - 1] = i; // Assign count to element
		if (i == 3)
		{
			cout << " | Skipped";
			continue;
		}

		if (i == 8)
		{
			cout << endl << "Done";
			break;
		}

		cout << " | " << vec.at(i - 1);
	}

	return 0;
}