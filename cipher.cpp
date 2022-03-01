#include "excercises.h"  

string cipher(int k, int n, string s){
    vector <char> r(n);
    r[0] = s[0] - 48;

    for (int i = 1 ; i < k; i++){
        r[i] = s[i-1] ^ s[i];
    }

    char aux;
    for (int i = k; i < n ; i++){
        aux = '0';
        for (int j = i-(k-1); j < i ; j++){
            aux = aux ^ r[j];
        }
        r[i] = aux ^ s[i];
    }
    string resultadoFinal = "";
    for (int i = 0; i < n; i++){
        resultadoFinal += r[i]+48;
    }
    return resultadoFinal;
}