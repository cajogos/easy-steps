#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string poem = "\n\tI never saw a man who looked";
	poem.append("\n\tWith such a wistful eye");
	poem.append("\n\tUpon that little tent of blue");
	poem.append("\n\tWhich prisoners call the sky");

	ofstream writer("poem.txt");

	if (!writer)
	{
		cout << "Error opening file for output" << endl;
		return -1; // Signal an error then exit the program
	}

	writer << poem << endl; // Write output
	writer.close();

	return 0;
}