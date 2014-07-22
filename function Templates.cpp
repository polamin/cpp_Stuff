#include <iostream>
using namespace std;

template <class polamin>
polamin addCrap(polamin a,polamin b)
{
	return a+b;
}

int main()
{
	// For now once you call parameter must be the same type of data
	int x=7,y=43,z;
	z=addCrap(x,y);
	cout << "Int = " << z << endl;

	double a=1.23,b=2.22,c;
	c = addCrap(a,b);
	cout << "double = " << c << endl;
}