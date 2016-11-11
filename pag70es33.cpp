// Pag 70 es 33

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (void){
	
	partenza:
	char continuo;
	int a;
	int b;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Questo programma esegue la potenza di un numero," << endl;
	inizio1:
	cout << "Inserisci un numero intero (base): ";
	cin >> a;
	if (a < 0){
		
		cout << " " << endl;
		cout << "ERRORE, devi inserire solo numeri positivi !" << endl;
		cout << " " << endl;
		goto inizio1;
		
	}
	inizio2:
	cout << "Inserisci un numero intero (esponente): ";
	cin >> b;
	if (b < 0){
		
		cout << " " << endl;
		cout << "ERRORE, devi inserire solo numeri positivi !" << endl;
		cout << " " << endl;
		goto inizio2;
		
	}
	double risultato = pow (a,b);
	cout << "Il risultato della potenza di " << a << "^" << b << " e': " << risultato << endl;
	cout << " " << endl;
	system ("PAUSE");
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cin >> continuo;
	cout << " " << endl;
	if (continuo == 's'){
		
		goto partenza;
		
	}
	return 0;	
}
