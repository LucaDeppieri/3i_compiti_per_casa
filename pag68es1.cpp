// Pag 68 es 1

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	float a;
	float b;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Inserisci il primo numero: ";
	cin >> a;
	cout << " " << endl;
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	cout << " " << endl;
	if (a < b){
		
		cout << "L'ordine crescente e': " << a << ", " << b << endl;
		
	}
	if (a > b){
		
		cout << "L'ordine crescente e': " << b << ", " << a << endl;
		
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
