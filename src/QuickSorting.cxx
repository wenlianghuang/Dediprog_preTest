#include "../inc/QuickSorting.h"
#include<iostream>

using namespace std;

void QuickSorting::swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int QuickSorting::Partition(int *arr,int front,int end){
    int pivot = arr[end];
    int i = front-1;
    for(int j = front; j < end; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[end]);
    return i;
}

void QuickSorting::QuickSort(int *arr, int front, int end){
    if(front < end){
        int pivot = Partition(arr,front,end);
        QuickSort(arr,front,pivot-1);
        QuickSort(arr,pivot+1,end);
    }
}

void QuickSorting::PrintArray(int *arr,int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}