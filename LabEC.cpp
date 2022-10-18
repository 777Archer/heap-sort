/*David Archer
Extra Credit Assignment*/


#include "LabEC.h"
#include <cstdlib>
#include <iostream>

#ifndef LabEC_CPP
#define LabEC_CPP

using namespace std;

template <class ItemType>

void makeArray(ItemType ary[], int max, int seed)
{
    srand(seed);
    for (int index = 0; index < max; index++)
        ary[index] = rand() % MAX_VALUE;
}
template <class ItemType>

void printEnds(ItemType ary[], int max)
{
    cout << "The first 10 values: ";
    for (int index = 0; index < 10; index++)
        cout << ary[index] << " ";
    cout << endl << "The last 10 values: ";
    for (int index = max - 10; index < max; index++)
        cout << ary[index] << " ";
    cout << endl;
}

#endif