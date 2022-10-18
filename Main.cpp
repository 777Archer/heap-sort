/*David Archer
Extra Credit Assignment*/

#include "LabEC.h"

using namespace std;

void swap(int arr[], int i, int j) 
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void heapRebuild(int index, int arr[], int n) 
{
    int maxInd = index, left = 2 * index + 1, right = 2 * index + 2;
    if (left < n && arr[left] > arr[maxInd]) 
    {
        maxInd = left;
    }
    if (right < n && arr[right] > arr[maxInd]) 
    {
        maxInd = right;
    }
    if (maxInd != index) 
    {
        swap(arr, index, maxInd);
        heapRebuild(maxInd, arr, n);
    }
}

void heapSort(int arr[], int n) 
{
    for (int i = n / 2; i >= 0; --i) 
    {
        heapRebuild(i, arr, n);
    }
    int heapSize = n;
    swap(arr, 0, --heapSize);
    while (heapSize > 1) 
    {
        heapRebuild(0, arr, heapSize);
        swap(arr, 0, --heapSize);
    }
}

int main()
{
    int arr[10000];
    makeArray<int>(arr, 10000, 5);
    printEnds<int>(arr, 10000);
    heapSort(arr, 10000);
    printEnds<int>(arr, 10000);

    return 0;
}