// Pag 68 es 7

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (void){
	
	partenza:
	int a;
	int b;
	int c;
	int delta;
	double soluzione1;
	double soluzione2;
	char continuo;
	cout << "Inserisci i coefficienti dell'equazione di secondo grado: " << endl;
	cout << "           -------> ax^2 + bx + c = 0 <-------            " << endl << endl;
	inizio1:
	cout << "a = ";
	cin >> a;
	cout << endl;
	if (a == 0){
		
		cout << "ERRORE, non e' un equazione di secondo grado. Inserire un numero diverso da 0 !" << endl << endl;
		goto inizio1;
	
	}
	cout << "b = ";
	cin >> b;
	cout << endl;
	cout << "c = ";
	cin >> c;
	cout << endl;
	delta = (b*b)-(4*a*c);
	if (delta < 0){
		
		cout << "Non esistono soluzioni. Causa Delta < 0." << endl << endl;
		
	}
	else{
		
		soluzione1 = (-b + sqrt(delta)) / (2*a);
		soluzione2 = (-b - sqrt(delta)) / (2*a);
		cout << "x1 = " << soluzione1 << endl << endl;
		cout << "x2 = " << soluzione2 << endl << endl;
		
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
