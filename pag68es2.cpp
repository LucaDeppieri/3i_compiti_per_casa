// Pag 68 es 2

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int a;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Inserisci un numero: ";
	inizio1:
	cin >> a;
	cout << " " << endl;
	if (a < 0){
		
		cout << "ERRORE, inserire un numero >= 0 !" << endl;
		goto inizio1;
		cout << " " << endl;
		
	}
	if (a%2 == 0){
		
		cout << a << " e' un numero pari" << endl;
		
	}
	if (a%2 == 1){
		
		cout << a << " e' un numero dispari" << endl;
		
	}

	cout << " " << endl;
	system ("PAUSE");
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cout << " " << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		cout << " " << endl;
		goto partenza;
		
	}
	
	return 0;
	
}
