#define LINEOUT(str) cout << #str << endl
#define GLUEOUT(a, b) cout << a##b << endl

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string longerline = "They carried a net ";
	longerline += "and their hearts were set";

	LINEOUT(In a bowl to sea went wise men three);
	LINEOUT(On a brilliant night in                June);

	GLUEOUT(longer, line);

	LINEOUT(On fishing up the moon.);

	return 0;
}