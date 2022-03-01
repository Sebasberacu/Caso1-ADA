#include "excercises.h"

void minionGame(string palabra){
    int puntaje[] = {0,0};

    for (int contador=0; contador<palabra.length(); contador++){
        puntaje[0] += ((palabra[contador] == 'A' ||
                        palabra[contador] == 'E' ||
                        palabra[contador] == 'I' ||
                        palabra[contador] == 'O' ||
                        palabra[contador] == 'U' ) ?
                        palabra.length() - contador : 0 );
        puntaje[1] += ((palabra[contador] != 'A' &&
                        palabra[contador] != 'E' &&
                        palabra[contador] != 'I' &&
                        palabra[contador] != 'O' &&
                        palabra[contador] != 'U' ) ?
                        palabra.length() - contador : 0 );
    }

    if (puntaje[0] > puntaje[1]){
        cout << "Kevin: " << puntaje[0] << endl;
    }
    else if (puntaje[0] < puntaje[1]){
        cout << "Stuart: " << puntaje[1] << endl;
    }else{
        cout << "Draw" << endl;
    }

}