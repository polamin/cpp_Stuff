#include "vectorhandler.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
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

        vectorHandler vth;

        vector<int> outputs = vth.findIndex(&v,target);

        cout << "All Indexs of " << target << " = " ;

        unsigned int vecSize = outputs.size();
        for (unsigned int i = 0 ; i < vecSize ; i++)
        {
            cout << outputs[i] << " ";
        }

        return 0;
}