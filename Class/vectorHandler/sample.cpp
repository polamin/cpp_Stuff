#include "vectorHandler.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
        vector<int> v;
        /////////// Declare Vector and input values to it .
        v.push_back (1);
        v.push_back (10);
        v.push_back (5);
        v.push_back (10);
        v.push_back (10);
        v.push_back (10);
        v.push_back (8);

        /* Normal Easy Find No Need Here if want every index
        int pos = find(v.begin(), v.end(), 8) - v.begin();
        cout << pos << endl ;
        */ 

        //Number you want to find
        int target = 10;

        //Declare Object from class
        vectorHandler vth;

        //Call Function findindex use outputs to store return
        vector<int> outputs = vth.findIndex(&v,target);


        //From now just print

        cout << "All Indexs of " << target << " = " ;

        unsigned int vecSize = outputs.size();
        for (unsigned int i = 0 ; i < vecSize ; i++)
        {
            cout << outputs[i] << " ";
        }

        cout << endl;

        return 0;
}