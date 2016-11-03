// Pag 69 es 20

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

int main (void){
	
	partenza:
	int num_max;
	cout << "********************************************" << endl;
	cout << "*                                          *" << endl;
	cout << "* Inserisci un numero N qualsiasi (N >= 0) *" << endl;
	cout << "*                                          *" << endl;
	cout << "********************************************" << endl;
	cout << "                                            " << endl;
	inizio:
	cin >> num_max;
	int numero = 0;
	int ctr_pari = 0;
	int dividendo;
	int divisore = 2;
	int quoziente, resto;
	char continuo;
	
	cout << " " << endl;
	
	if (num_max < 0){
		
		cout << "****************************************************" << endl;
		cout << "*                                                  *" << endl;
		cout << "* Errore, inserisci un numero N qualsiasi (N >= 0) *" << endl;
		cout << "*                                                  *" << endl;
		cout << "****************************************************" << endl;
		cout << "                                                    " << endl;
		goto inizio;
	}

	cout << "Numeri pari da 0 a " << num_max << ":" << endl;
	
	for (int numero = 0; ctr_pari < num_max; numero++){
		
		dividendo = numero;
		quoziente = dividendo / divisore;
		resto = dividendo % divisore;
		if (resto == 1){
			
			// Non avviene niente
			
		}
		else{
			
			if (resto == 0){
				
				ctr_pari = ctr_pari + 1;
				cout << " " << endl;
				cout << numero << endl;
				
			}
			
		}
		
	}
	
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		cout << " " << endl;
		goto partenza;	
		
	}
	
	return 0;
	
}
