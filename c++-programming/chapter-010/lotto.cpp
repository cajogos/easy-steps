#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	int i, j, k, nums[50];

	srand((int) time(0));

	for (i = 1; i < 50; i++)
	{
		nums[i] = i;
	}

	for (i = 1; i < 50; i++)
	{
		j = (rand() % 49) + 1;
		k = nums[i];
		nums[i] = nums[j];
		nums[j] = k;
	}

	cout << "Your six lucky numbers are: ";
	for (i = 1; i < 7; i++)
	{
		cout << nums[i] << " ";
	}

	return 0;
}