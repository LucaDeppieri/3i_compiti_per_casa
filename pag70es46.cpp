// Pag 70 es 46

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main (void){
	
	partenza:
	char a;
	char b;
	char c;
	char d;
	char scelta;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Che tipo di programma vuoi eseguire?" << endl; 
	cout << "[a] Numeri dispari da 1 a 99" << endl;
	cout << "[b] n^2 da 1 a 50" << endl;
	cout << "[c] Sequenza di numeri positivi-negativi da 1 a -100" << endl;
	cout << "[d] Numeri fratti da 1/2 a 99/100" << endl;
	cin >> scelta;
	if (scelta == 'a'){
		
		int ctr;
		int resto;
		int ctr2 = 1;
		for (ctr = 1; ctr <= 99; ctr++){
			
			resto = ctr % 2;
			if (resto == 1){
				
				cout << ctr2 << ") " << ctr << endl;;
				ctr2++;
				
			}
			
		}
		
	}
	if (scelta == 'b'){
		
		int ctr;
		int ctr2 = 1;
		for (ctr = 1; ctr <= 50; ctr++){
			
			double quadrato = pow(ctr,2);
			cout << ctr2 << ") " << quadrato << endl;
			ctr2++;
			
		}
		
	}
	if (scelta == 'c'){
		
		int ctr;
		int ctr2 = 1;
		int resto;
		for (ctr = 1; ctr <= 100; ctr++){
			
			resto = ctr % 2;
			if (resto == 1){
				
				cout << ctr2 << ")  " << ctr << endl;;
				ctr2++;
				
			}
			if (resto == 0){
				
				cout << ctr2 << ") -" << ctr << endl;;
				ctr2++;
				
			}
			
		}
		
	}
	if (scelta == 'd'){
		
		int ctr;
		int ctr2 = 2;
		int ctr3 = 1;
		for (ctr = 1; ctr <= 99; ctr++){
			
			cout << ctr3 << ") " << ctr << "/" << ctr2 << endl;
			ctr2++;
			ctr3++;
			
		}
		
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
