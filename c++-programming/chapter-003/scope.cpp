#include <iostream>

using namespace std;

float bodyTempC();
float bodyTempF();

int main()
{
	cout << "Centigrade: " << bodyTempC() << endl;
	cout << "Fahrenheit: " << bodyTempF() << endl;

	return 0;
}

float bodyTempC()
{
	float temperature = 37.0;
	return temperature;
}

float bodyTempF()
{
	float temperature = 98.6;
	return temperature;
}