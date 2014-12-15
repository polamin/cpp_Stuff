#include <iostream>
using namespace std;

template <class T>
class Polamin
{
	T first,second;
	public:
		Polamin(T a,T b)
		{
			first 	= 	a;
			second 	= 	b;
		}
		T bigger();
};

template <class T>
T Polamin<T>::bigger()
{
	return (first>second?first:second);
}

int main()
{
	Polamin <int> po(258,105);
	cout << po.bigger() << endl;
	return 0;
}