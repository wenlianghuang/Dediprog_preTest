#ifndef QUICKSORTING_H
#define QUICKSORTING_H

namespace QuickSorting{
    void swap(int *a,int *b);
    int Partition(int *arr,int front,int end);
    void QuickSort(int *arr,int front,int end);
    void PrintArray(int *arr,int size);
};

#endif