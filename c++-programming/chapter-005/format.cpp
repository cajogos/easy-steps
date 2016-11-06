#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	const int RANGE = 12;
	string tab[RANGE];
	int i = 0, j = 0;

	ifstream reader("records.txt");

	if (!reader)
	{
		cout << "Error opening input file" << endl;
		return -1;
	}

	while (!reader.eof())
	{
		if ((i + 1) % 4 == 0)
		{
			getline(reader, tab[i++], '\n');
		}
		else
		{
			getline(reader, tab[i++], '\t');
		}
	}

	reader.close();
	i = 0;

	while (i < RANGE)
	{
		cout << endl << "Record Number: " << ++j << endl;
		cout << "Forename: " << tab[i++] << endl;
		cout << "Surname: " << tab[i++] << endl;
		cout << "Department: " << tab[i++] << endl;
		cout << "Telephone: " << tab[i++] << endl;
	}

	return 0;
}