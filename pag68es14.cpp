// Pag 68 es 14

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (void){
	
	partenza:
	int perimetro;
	int area;
	double diagonale;
	double radice;
	char continuo;
	int altezza;
	cout << " " << endl;
	cout << "Inserisci il valore del primo lato del rettangolo (altezza): ";
	inizio1:
	cin >> altezza;
	if (altezza <= 0){
		
		cout << " " << endl;
		cout << "ERRORE, inserisci un numero strettamente maggiore di 0: ";
		goto inizio1; 
		
	}
	
	int base;
	cout << " " << endl;
	cout << "Inserisci il valore del secondo lato del rettangolo (base): ";
	inizio2:
	cin >> base;
	if (base <= 0){
		
		cout << " " << endl;
		cout << "ERRORE, inserisci un numero strettamente maggiore di 0: ";
		goto inizio2; 
		
	}
	
	int domanda;
	cout << " " << endl;
	cout << "Misure del rettangolo:" << endl << "Altezza = " << altezza << endl << "Base = " << base << endl;
	cout << " " << endl;
	cout << "Con questi due valori che cosa vuoi calcolare?" << endl << "[1] Perimetro" << endl << "[2] Area" << endl << "[3] Diagonale" << endl;
	cout << " " << endl;
	inizio3:
	cin >> domanda;
	if ((domanda <= 0) || (domanda > 3)){
		
		cout << " " << endl;
		cout << "ERRORE, ci sono solo 3 opzioni! Reinserire il numero: ";
		goto inizio3;
		
	}
	if (domanda == 1){
		
		perimetro = (base * 2) + (altezza * 2);
		cout << " " << endl;
		cout << "Il perimetro del rettangolo e': " << perimetro << endl;
		
	}
	if (domanda == 2){
		
		area = base * altezza;
		cout << " " << endl;
		cout << "L'area del rettangolo e': " << area << endl;
		
	}
	if (domanda == 3){
		
		radice = (base * base) + (altezza * altezza);
		diagonale = sqrt(radice);
		cout << " " << endl;
		cout << "La diagonale del rettangolo misura: " << diagonale << endl;
		
	}
	
	cout << " " << endl;
	system ("PAUSE");
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cout << " " << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		goto partenza;
		
	}
	
	return 0;
		
}
