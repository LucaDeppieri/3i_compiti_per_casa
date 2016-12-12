// Pag 71 es 52

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int ctr2 = 1;
	int somma;
	int terna = 3;
	int N;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl << endl;
	cout << "Quante terne di numeri triangolari vuoi visualizzare? ";
	inizio1:
	cin >> N;
	if (N <= 0){
		
		cout << endl;
		cout << "ERRORE, devi inserire un numero maggiore di zero: ";
		goto inizio1;
		
	}
	if (N >= 1){
		
		N = N + 2;
		for (int ctr = 2; ctr < N; ctr++){
			
			if (ctr == 2){
				
				cout << endl;
				cout << "Terna 1 | 1 + 2 = " << terna << endl;
				
			}
			else{
				
				somma = terna + ctr;
				cout << "Terna " << ctr2 << " | " << terna << " + " << ctr << " = " << somma << endl;
				terna = somma;
				
			}
			ctr2++;
			
		}
		
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
