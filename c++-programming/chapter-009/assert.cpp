#define DEBUG 1

#if(DEBUG == 1)
	#define ASSERT(expr)							\
	cout << #expr << " ... " << num;				\
	if (expr != true)								\
	{												\
		cout << " Fails in file: " << __FILE__;		\
		cout << " at line: " << __LINE__ << endl;	\
	}												\
	else											\
	{												\
		cout << " Succeeds" << endl;				\
	}
#elif(DEBUG == 0)
	#define ASSERT(result)							\
	cout << "Number is " << num << endl;
#endif

#include <iostream>

using namespace std;

int main()
{
	int num = 9;

	ASSERT(num < 10);

	num++;

	ASSERT(num < 10);

	return 0;
}