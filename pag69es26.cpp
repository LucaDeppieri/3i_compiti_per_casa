// Pag 69 es 26

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int divisore;
	int resto;
	bool num_primo = true;
	char continuo;
	int num;
	cout << " " << endl;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << "Inserisci in input un numero, in output verra' mostrato se e' primo o no" << endl;
	cout << " " << endl;
	cin >> num;
	
	if (num == 0){
		
		cout << " " << endl;
		cout << "No, " << num << " non e' primo" << endl;
		
	}
	else{
		
		for (divisore = 2;  divisore < num; divisore++){
		
			resto = num % divisore;
			if (resto == 0){
				
				num_primo = false;
				
			}
		
		}
		
		if (num_primo){
			
			cout << " " << endl;
			cout << "Si', " << num << " e' primo" << endl;
			
		}
		else{
			
			cout << " " << endl;
			cout << "No, " << num << " non e' primo" << endl;
			
		}	
			
	}
	
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
