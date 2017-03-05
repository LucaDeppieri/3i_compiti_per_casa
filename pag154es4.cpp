// Pag 154 es 4

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

main (){
	
	int v[10];
	int numeri;
	int i = 0;
	int sd = 0;
	int mp = 1;
	do{
	cout << "Quanti numeri minori di 10 vuoi inserire? ";
	cin >> numeri;
	}while (numeri>10);
	for (i = 0; i < numeri; i++){
	    cout << "Inserire il "<< i+1 << " numero: ";
	    cin >> v[i];
	}
	//Prodotto posto pari non funziona
	for (i = 1; i <= numeri; i = i+2){
	    mp*= v[i];
	}
	cout << "Il prodotto dei numeri di posto pari e': " << mp << endl;
	//Somma posto dispari non funziona
	for (i = 1; i <= numeri; i = i+2){
	    sd+= v[i];
	}
	cout << "La somma dei numeri di posto dispari e': " << sd << endl;

}
