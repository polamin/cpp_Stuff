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

    //Add a new element if you want another:
    sub.push_back(subject());

    sub[2].name = "Physic";
    sub[2].marks = 100;


    sub.erase(sub.begin()+2); // erase the 3nd element

    for (int i = 0 ; i < sub.size() ; i++)
    {
    	cout << sub[i].name << endl;
    }

}