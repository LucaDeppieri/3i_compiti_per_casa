// Pag 69 es 30

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	char continuo;
	int ctr = 0;
	int num;

	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Immetti un numero compreso tra 0 e 1000" << endl << " " << endl;
	inizio1:
	cin >> num;
	cout << " " << endl;
	
	if ((num < 0) || (num > 1000)){
		
		cout << " " << endl;
		cout << "ERRORE, inserisci un numero compreso tra 0 e 1000 !" << endl;
		goto inizio1;
		
	}
	
	do{
		
		int divisore = 10;
		cout << "La " << ctr << " esima cifra da destra e': " << ctr << endl;
		num = num / divisore;
		ctr++;
		
	} while (ctr <= 3 && num != 0);

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
