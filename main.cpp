#include "excercises.h"

int main(){
    
    //Compare the Triplets
    int anna[] = {1,2,3}; int bob[] = {3,2,1};
    //int anna[] = {52,1,9}; int bob[] = {77,5,10};

    int result_cT[] = {0,0};
    int * cT = compareTriplets(anna, bob, result_cT);
    cout << "cT[0]: " << cT[0] << "\tcT[1]: " << cT[1] <<endl;

    int result_cTO[] = {0,0};
    int * cTO = compareTripletsOptimized(anna, bob, result_cTO);
    cout << "cTO[0]: " << cTO[0] << "\tcTO[1]: " << cTO[1] <<endl;
    /*
    En la primera función, al usar un for se producen demasiadas iteraciones que pueden ser ahorradas para un ejercicio tan sencillo, 
    en este se hacen hasta 10 comparaciones también, por eso la segunda función es mejor, porque se genera un resultado gracias a operaciones
    aritméticas, y no se hace uso de más comparadores que para asegurarse de que no ocurra una división entre 0, por lo que el código fluye 
    corrido.
     */


    //Time Conversion
    string tC1 = "12:09:22AM"; string tC2 = "08:33:59PM"; string tC3 = "11:11:11AM";
    cout << timeConversion(tC2) << endl;
    cout << timeConversionOptimized(tC2) << endl;
    /*
    A diferencia de en la primera función, en la segunda se utiliza una variable de factor para manejar las horas, con una combinación aritmética,
    con esto se ahorran las comparaciones que se tienen que hacer en la primer función, y el resultado es más directo, sin tener que verificar
    tantas validac
     */


    //Subarray Division
    int chocolateBar[]= {2,2,1,3,3}; int d = 7; int m = 3;
    //int chocolateBar[]= {1,2,1,3,2}; int d = 3; int m = 2;
    cout << subarrayDivision(chocolateBar,d,m,5) << endl;
    cout << subarrayDivisionOptimized(chocolateBar,d,m,5) << endl;
    /*
    En la función optimizada el resultado es mucho más rápido debido a que no se inicializan tantas variables ni se hacen muchas comparaciones, esto debido
    a la lógica que es diferente en ambas, además, que a pesar de que hayan un ciclo dentro de otro en ambas funciones, en la segunda se hacen más cortos y
    fluyen de manera menos pesada.
    */

    //Minion game
    minionGame("BANANA");
    //minionGame("MONO");

    //Cipher
    cout << cipher(4, 7, "1110100110") << endl;
    //cout << cipher(2, 6, "1110001") << endl;

    //Pairs
    int arr[] = {1,5,3,4,2};
    cout << pairs(arr, 2, 5) << endl;
    //int arr[] = {1,2,3,4};
    //cout << pairs(arr, 1, 4) << endl;

}