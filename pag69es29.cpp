
// Pag 69 es 29

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (void){
	
	partenza:
	int N;
	int num;
	int num_max = 0;
	int num_min = 0;
	float num_medio;
	int num_progressivo = 0;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl << endl;
	inizio1:
	cout << "Quanti numeri vuoi inserire? ";
	cin >> N;
	if (N <= 0){
    	
		cout << " " << endl;
    	cout << "ERRORE, devi inserire un numero maggiore di 0" << endl;
    	cout << " " << endl;
    	goto inizio1;	
    
	}
	// Calcolo valore minimo e massimo
	for (int ctr = 0; ctr < N; ctr++){
		
		cout << endl;
		cout << "Inserisci un numero reale: ";
		cin >> num;
		if (ctr == 0){
			
			num_max = num;
			num_min = num;
			
		}
		else{
			
			if (num < num_min){
				
				num_min = num;
				
			}
		
			if (num > num_max){
				
				num_max = num;
				
			}
			
		}
		num_progressivo = num_progressivo + num;	
	}
	
	num_medio = ((float) num_progressivo / N);
	cout << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "| Il numero massimo e': " << num_max << "                                      " << endl;
	cout << "| Il numero minimo e': " << num_min << "                                       " << endl;
	cout << "| La media dei numeri e': " << num_medio << "                                  " << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	
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
