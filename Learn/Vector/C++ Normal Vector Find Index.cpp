#include <iostream>
#include <vector>
#include <algorithm> //Need if use std::find

using namespace std;

vector<int> findIndex(vector<int> v,int target)
{	
	vector<int> keep;
	unsigned int vecSize = v.size();

	for (unsigned int i = 0 ; i < vecSize ; i++)
    {
    	if(v[i] == target)
    		keep.push_back(i);
    }

	return keep;
}


int main()
{
	vector<int> v;

    v.push_back (1);
    v.push_back (10);
    v.push_back (5);
    v.push_back (10);
    v.push_back (10);
    v.push_back (10);
    v.push_back (8);

    /* Normal Easy Find
    int pos = find(v.begin(), v.end(), 8) - v.begin();
    cout << pos << endl ;
    */

    int target = 10;


    vector<int> outputs = findIndex(v,target);

    cout << "All Indexs of " << target << " = " ;

    unsigned int vecSize = outputs.size();
    for (unsigned int i = 0 ; i < vecSize ; i++)
    {
    	cout << outputs[i] << " ";
    }

    return 0;

}