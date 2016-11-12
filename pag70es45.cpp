// Pag 70 es 45

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	char continuo;
	int ctr;
	int num;
	int somma;
	float A;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Inserisci un numero: ";
	cin >> A;
	cout << " " << endl;
	num = 0;
	for (ctr = 0; ctr < 100; ctr++){
		
		somma = num + A;
		cout << ctr << ") " << somma << endl;
		num = num + 5;
		
	}
	cout << " " << endl;
	system ("PAUSE");
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		cout << " " << endl;
		goto partenza;
		
	}
	return 0;
	
}
