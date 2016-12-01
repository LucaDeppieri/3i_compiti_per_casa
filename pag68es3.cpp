// Pag 68 es 3

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int a;
	int b;	
	int c;
	bool isoscele = false;
	bool equilatero = false;
	bool scaleno = false;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Inserisci il valore del primo lato del triangolo: ";
	inizio1:
	cin >> a;
	if (a <= 0){
		
		cout << " " << endl;
		cout << "ERRORE, il lato non puo' essere minore o uguale a 0 !" << endl;
		cout << " " << endl;
		goto inizio1;
		
	}
	cout << " " << endl;
	cout << "Inserisci il valore del secondo lato del triangolo: ";
	inizio2:
	cin >> b;
	if (b <= 0){
		
		cout << " " << endl;
		cout << "ERRORE, il lato non puo' essere minore o uguale a 0 !" << endl;
		cout << " " << endl;
		goto inizio2;
		
	}
	cout << " " << endl;
	cout << "Inserisci il valore del terzo lato del triangolo: ";
	inizio3:
	cin >> c;
	if (c <= 0){
		
		cout << " " << endl;
		cout << "ERRORE, il lato non puo' essere minore o uguale a 0 !" << endl;
		cout << " " << endl;
		goto inizio3;
		
	}
	
	cout << " " << endl;
	system ("PAUSE");
	cout << " " << endl;
	
	if ((a != b) && (b != c) && (a != c)){
	
		bool isoscele = false;
		bool equilatero = false;
		bool scaleno = true;
		if ((scaleno == true) && (isoscele == false) && (equilatero == false)){
			
			cout << "Il triangolo e' SCALENO" << endl;
			goto fine;
			
		}
		
	}
	if ((a == b) || (a == c) || (b == c)){
		
		bool isoscele = true;
		bool equilatero = false;
		bool scaleno = false;
		if ((scaleno == false) && (isoscele == true) && (equilatero == false)){
			
			cout << "Il triangolo e' ISOSCELE" << endl;
			goto fine;
			
		}
	
	}		
	if ((a == b) && (b == c)){

		bool isoscele = false;
		bool equilatero = true;
		bool scaleno = false;
		if ((scaleno == false) && (isoscele == false) && (equilatero == true)){
			
			cout << "Il triangolo e' EQUILATERO" << endl;
			goto fine;
			
		}
						
	}
	
	fine:
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
