#include <boost/thread.hpp>
#include <iostream>

using namespace std;
void task1() { 
    for(int i = 0 ; i < 10 ; i++)
    {
    	cout << i << endl;
    }
}

void task2() { 
    for(int i = 0 ; i < 10 ; i++)
    {
    	cout << i << endl;
    }
}

int main (int argc, char ** argv) {
    using namespace boost; 
    thread thread_1 = thread(task1);
    thread thread_2 = thread(task2);

    // do other stuff
    thread_2.join();
    thread_1.join();
    return 0;
}