#include <iostream>

using namespace std;

template <typename Type>
Type maximum(Type tX, Type tY) {
	return (tX > tY) ? tX : tY;
}

int main(int argc, char const *argv[]) {
	double test = maximum(4.33, 9.99);
	cout << test << endl;
	return 0;
}