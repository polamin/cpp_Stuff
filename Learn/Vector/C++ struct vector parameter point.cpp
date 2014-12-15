#include <iostream>
#include <string>
#include <vector>

using namespace std;

class subject {
	
	public:
    string name;
    int marks;
    int credits;
};

void f(vector<subject>* i)
{
   (*i)[0].name = "changed";
   cout << (*i)[0].name << endl;
}


int main() {
    vector<subject> sub;

    //Push back new subject created with default constructor.
    sub.push_back(subject());

    //Vector now has 1 element @ index 0, so modify it.
    sub[0].name = "english";
    sub[0].marks = 80;

    //Add a new element if you want another:
    sub.push_back(subject());

    //Modify its name and marks.
    sub[1].name = "math";
    sub[1].marks = 90;

    f(&sub);

}


