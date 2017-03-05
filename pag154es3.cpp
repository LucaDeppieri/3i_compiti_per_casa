// Pag 154 es 3

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (){
    int N = 0;
    int i = 0;
    int V[10];
    do {
        cout << "Inserisci la quantita' dei numeri: ";
        cin >> N;
    } while (N <= 0 || N > 10);
    for (i = 0; i < N; i++){
        cout << "Inserisci il " << i+1 << " elemento: ";
        cin >> V[i];
    }
    cout << endl;
    cout << "L'ordine dei numeri e': ";
    for (i = 0; i < N ; i++){
        cout << V[i];
    }
    cout << endl << "L'ordine inverso dei numeri e': ";
    for (i = N-1; i >= 0; i--){
        cout << V[i];
    }
    cout << endl;
    return 0;
}
