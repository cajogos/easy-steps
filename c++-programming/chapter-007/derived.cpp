#include <iostream>

using namespace std;

class Polygon
{
	protected:
		int width, height;

	public:
		void setValues(int w, int h) { width = w; height = h; }
};

class Rectangle : public Polygon
{
	public:
		int area() { return (width * height); }
};

class Triangle : public Polygon
{
	public:
		int area() { return ((width * height) / 2); }
};

int main()
{
	Rectangle rect;
	Triangle trgl;

	rect.setValues(4, 5);
	trgl.setValues(4, 5);

	cout << "Rectangle area: " << rect.area() << endl;
	cout << "Triangle area: " << trgl.area() << endl;
}