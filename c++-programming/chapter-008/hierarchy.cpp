#include <iostream>

using namespace std;

class Boat
{
protected:
	int length;

public:
	int getLength() { return length; }
	virtual void Model() = 0;
};

class Sailboat : public Boat
{
protected:
	int mast;

public:
	int getMast() { return mast; }
	virtual void Boom() = 0;
};

class Laser : public Sailboat
{
public:
	Laser()
	{
		mast = 19;
		length = 35;
	}

	~Laser();

	void Model()
	{
		cout << "Laser Classic" << endl;
	}

	void Boom()
	{
		cout << "Boom: 14ft" << endl;
	}
};

int main()
{
	Laser* pLaser = new Laser;

	pLaser->Model();

	cout << "Length: " << pLaser->getLength() << "ft" << endl;

	cout << "Height: " << pLaser->getMast() << "ft" << endl;

	pLaser->Boom();

	return 0;
}