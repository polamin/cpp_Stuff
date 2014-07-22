#include <iostream>
using namespace std;

template <class FIRST,class SECOND>
FIRST smaller(FIRST a,SECOND b)
{
	//if a < b return a else b
	return (a<b?a:b);
}

int main()
{
	int 	x = 89;
	double 	y = 56.78;
	cout << smaller(x,y) << endl;
	//!!!! Answer = 56 because it returned FIRST and FIRST parameter's type is INT
	//So FIRST's type is INT
	return 0;
}