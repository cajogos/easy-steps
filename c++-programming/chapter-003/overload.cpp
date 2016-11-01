#include <iostream>

using namespace std;

float computeArea(float);
float computeArea(float, float);
float computeArea(char, float, float);

int main()
{
	float num, area;

	cout << "Enter dimension in feet: ";
	cin >> num;

	area = computeArea(num);
	cout << "Circle: Area = " << area << " sq.ft." << endl;

	area = computeArea(num, num);
	cout << "Square: Area = " << area << " sq.ft." << endl;

	area = computeArea('T', num, num);
	cout << "Triangle: Area = " << area << " sq.ft." << endl;

	return 0;
}

float computeArea(float diameter)
{
	float radius = (diameter / 2);
	return (3.141593 * (radius * radius));
}

float computeArea(float width, float height)
{
	return (width * height);
}

float computeArea(char letter, float width, float height)
{
	return ((width / 2) * height);
}