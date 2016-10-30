#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <int> vec(3, 100);

	cout << "Vector size: " << vec.size() << endl;
	cout << "Is empty?: " << vec.empty() << endl;
	cout << "First element: " << vec.at(0) << endl;

	vec.pop_back();
	cout << "Vector size: " << vec.size() << endl;
	cout << "Final element: " << vec.back() << endl;

	vec.clear();
	cout << "Vector size: " << vec.size() << endl;

	vec.push_back(200);
	cout << "Vector size: " << vec.size() << endl;
	cout << "First element: " << vec.front() << endl;

	return 0;
}