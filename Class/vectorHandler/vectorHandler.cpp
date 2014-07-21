#include <vector>
#include "vectorhandler.h"

std::vector<int> findIndex(std::vector<int> *v,int target)
{

    std::vector<int> keep;
    unsigned int vecSize = v->size();

    for (unsigned int i = 0 ; i < vecSize ; i++)
    {
        if((*v)[i] == target)
            keep.push_back(i);
    }

    return keep;

}
