#include "excercises.h"

int * compareTriplets(int a[] , int b[], int * r){
    
    for (int i=0 ; i<3 ; i++){
        if (a[i] > b[i])
            r[0]++;
        if (a[i] < b[i])
            r[1]++;
    }

    return r;
}

int * compareTripletsOptimized(int a[], int b[], int*r){
    if (a[0]!= b[0]){
        int numero = (a[0]-b[0])/abs(a[0]-b[0]);
        r[0] += numero + 1;
        r[1] += numero - 1;
    }
    if (a[1]!= b[1]){
        int numero = (a[1]-b[1])/abs(a[1]-b[1]);
        r[0] += numero + 1;
        r[1] += numero - 1;
    }
    if (a[2]!= b[2]){
        int numero = (a[2]-b[2])/abs(a[2]-b[2]);
        r[0] += numero + 1;
        r[1] += numero - 1;   
    }

    r[0] = r[0]/2;
    r[1] = abs(r[1]/2);

    return r;
}