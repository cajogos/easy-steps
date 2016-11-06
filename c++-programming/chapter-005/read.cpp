#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char letter;
	int i;
	string line;

	ifstream reader("poem.txt");

	if (!reader)
	{
		cout << "Error opening input file" << endl;
		return -1;
	}

	for (i = 0; !reader.eof(); i++)
	{
		reader.get(letter);
		cout << letter;
	}
	reader.close();
	cout << "Iterations: " << i << endl;

	ifstream reader2("poem.txt");
	for (i = 0; !reader2.eof(); i++)
	{
		getline(reader2, line);
		cout << line << endl;
	}
	reader2.close();
	cout << "Iterations: " << i << endl;


	return 0;
}