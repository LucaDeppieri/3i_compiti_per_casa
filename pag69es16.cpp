// Pag 69 es 16

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int e;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl << endl;
	inizio1:
	cout << "Inserisci l'eta\' del visitatore della mostra: ";
	cin >> e;
	cout << endl;
	if (e < 0){
		
		cout << "ERRORE, il visitatore non puo\' avere " << e << " anni !" << endl << endl;
		goto inizio1;
		
	}
	if ((e >= 0) && (e < 5)){
		
		cout << "Per i bambini di eta\' inferiore ai 5 anni il biglietto e\' gratuito" << endl;
		
	}
	if ((e >= 5) && (e <= 10)){
		
		cout << "Per i bambini di eta\' compresa tra i 5 e i 10 anni il prezzo del biglietto e\' di 2 euro" << endl;
		
	}
	if ((e >= 11) && (e <= 17)){
		
		cout << "Per i ragazzi di eta\' compresa tra gli 11 e i 17 anni il prezzo del biglietto e\' di 4 euro" << endl;
		
	}
	if ((e >= 18) && (e <= 26)){
		
		cout << "Per gli adulti di eta\' compresa tra i 18 e i 26 anni il prezzo del biglietto e\' di 5 euro" << endl;
		
	}
	if ((e > 26) && (e < 130)){
		
		cout << "Per gli adulti di eta\' superiore ai 26 anni il prezzo del biglietto e\' di 7 euro" << endl;
		
	}
	if (e >= 130){
		
		cout << "ERRORE, il visitatore non puo\' avere " << e << " anni !" << endl << endl;
		goto inizio1;
		
	}
	
	cout << endl;
	system ("PAUSE");
	cout << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		cout << endl;
		goto partenza;
		
	}
	
	return 0;
	
}
