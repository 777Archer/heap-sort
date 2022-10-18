/*David Archer
Extra Credit Assignment*/

#ifndef LabEC_H
#define LabEC_H

const int MAX_VALUE = 10000;
const int MAX_SIZE = 10000;
const int MAX_DIGITS = 4;

template <class ItemType>
void makeArray(ItemType ary[], int max, int seed);

template <class ItemType>
void printEnds(ItemType ary[], int max);

#include "Main.cpp"

#endif
