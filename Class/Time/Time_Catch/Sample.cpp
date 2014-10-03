#include <iostream>
#include <ctime>
#include "time_catch.h"
using namespace std;

int main () 
{
  time_catch timer;
  double last_duration;
  while(1)
  {
    double time_from_catch = timer.get_time();
    cout <<"Time since start = " << time_from_catch <<endl;
    if(timer.diff_time(1))
    {
      cout << "different 1 second this will show again after 1 second" << endl;
      break;
    }
  }

  return 0;
}