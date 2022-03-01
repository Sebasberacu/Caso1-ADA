#include "excercises.h"

int pairs(int arr[] , int k, int size){
    int result = 0;
    for (int i = 0 ; i < size-1 ; i++){
        for (int j = i+1 ; j < size ; j++){
            if (abs(arr[i]-arr[j])==k)
                result++;
        }
    }
    return result;
}
