// Pag 69 es 19

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main (void){
	
	int N = 0;
	int dividendo;
	int divisore = 2;
	int quoziente, resto;
	cout << "***************************************************" << endl;
	cout << "*                                                 *" << endl;
	cout << "* Questo programma mostra i primi 100 numeri pari *" << endl;
	cout << "*                                                 *" << endl;
	cout << "***************************************************" << endl;
	cout << "                                                " << endl;
	system ("PAUSE");
	
	for (int N = 0; N <= 200; N++){
		
		dividendo = N;
		quoziente = dividendo / divisore;
		resto = dividendo % divisore;
		if (resto == 1){
			
			//Non avviene niente
			
		}
		else{
			
			if (resto == 0){
				
				cout << " " << endl;
				cout << N << endl;
				
			}
			
		}
		
	}
	
	return 0;
	
}
