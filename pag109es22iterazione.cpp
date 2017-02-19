// Pag 109 es 22 con iterazione

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (){
	
	int numero;
	int resto;
	int ncifre;
	
	cout << "Inserisci un numero intero di cui vuoi invertire le cifre: ";
	cin >> numero;
	cout << endl;
	ncifre = log10(numero)+1;
	cout << "L'inverso di " << numero << " e' ";
	while (ncifre > 0){
		resto = numero % 10;
		numero = numero / 10;
		cout << resto;
		ncifre--;
	}
	return 0;
	
}
