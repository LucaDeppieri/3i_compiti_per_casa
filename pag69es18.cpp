// Pag 69 es 18

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	char continuo;
	int ctr;
	int ctr2 = 1;
	int N;
	int x;
	int modulo = 0;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl << endl;
	inizio1:
	cout << "Quanti numeri interi vuoi inserire? ";
	cin >> N;
	cout << endl;
	if (N <= 0){
		
		cout << "ERRORE, Inserisci un numero maggiore di zero !" << endl << endl;
		goto inizio1;
		
	}
	for (ctr = 0; ctr < N; ctr++){
		
		cout << "Inserisci il " << ctr2 << " numero intero: ";
		cin >> x;
		if (x < 0){
			
			modulo = x * -1;
			cout << "Il modulo di " << x << " e\' " << modulo << endl << endl;
			
		}
		else{
			
			modulo = x;
			cout << "Il modulo di " << x << " e\' " << modulo << endl << endl;
			
		}
		ctr2++;
		
	}

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
