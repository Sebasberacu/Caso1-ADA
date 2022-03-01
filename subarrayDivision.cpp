#include "excercises.h"


int sumaArray(int s[] , int tamanno){
    int r = 0;
    for (int i = 0 ; i < tamanno ; i++){
        r += s[i];
    }
    return r;
}

int subarrayDivision(int s[] , int d , int m , int size){
    int posicionFinal = m;
    int posicionInicial = 0;
    int arrayNuevo[m];
    int controlNuevoArray = 0;
    int respuesta = 0;

    while (posicionFinal <= size){
        for (int k = 0 ; k<m ; k++){
            arrayNuevo[k] = s[controlNuevoArray];
            controlNuevoArray += 1;
        }
        posicionFinal += 1;
        posicionInicial += 1;
        controlNuevoArray = posicionInicial;

        if (sumaArray(arrayNuevo , m) == d){
            respuesta +=1;
        }
    }
    return respuesta;

}

int subarrayDivisionOptimized(int s[] , int d, int m, int size){
    int ocurrencias = 0;

    for (int i = 0 ; i < size ; i++){ //recorrer todos los cuadros de chocolate
        int suma = 0;
        for (int j = 0 ; j < m ; j++){ //hacer las comparaciones a la derecha por cada cuadro
            suma += s[i+j];
        }
        if (suma == d){
            ocurrencias++;
        }
    }
    return ocurrencias;
}
