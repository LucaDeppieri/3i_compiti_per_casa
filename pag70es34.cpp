// Pag 70 es 34

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (void){
	
	partenza:
	char continuo;
	float N;
	int M;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Questo programma esegue la potenza di un numero," << endl;
	cout << "Inserisci un numero reale (base): ";
	cin >> N;
	inizio1:
	cout << "Inserisci un numero intero (esponente): ";
	cin >> M;
	if (M < 0){
		
		cout << " " << endl;
		cout << "ERRORE, devi inserire solo numeri positivi !" << endl;
		cout << " " << endl;
		goto inizio1;
		
	}
	double risultato = pow(N,M);
	cout << "Il risultato della potenza di " << N << "^" << M << " e': " << risultato << endl;
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
