// Pag 68 es 12

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	inizio:
	int mese;
	cout << "*********************************************************************" << endl;
	cout << "*                                                                   *" << endl;
	cout << "* Fornisci in input il numero che corrisponde al mese dell'anno, in *" << endl;
	cout << "* output sara' mostrato il numero di giorni all'interno di esso     *" << endl;
	cout << "*                                                                   *" << endl;
	cout << "*********************************************************************" << endl;
	cout << " " << endl;
	cin >> mese;
	char continuo;
	
	if (mese <= 0){
		
		cout << " " << endl;
		cout << "***************************************************" << endl;
		cout << "*                                                 *" << endl;
		cout << "* Errore, non esiste un mese corrispondente a " << mese << "  *" << endl;
		cout << "*                                                 *" << endl;
		cout << "***************************************************" << endl; 
		goto inizio;
		
	}
	
	if (mese > 12){
		
		cout << " " << endl;
		cout << "***************************************************" << endl;
		cout << "*                                                 *" << endl;
		cout << "* Errore, non esiste un mese corrispondente a " << mese << "  *" << endl;
		cout << "*                                                 *" << endl;
		cout << "***************************************************" << endl; 
		goto inizio;
		
	}
	
	if (mese == 1){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Gennaio e' 31" << endl; 
		
	}
	
	if (mese == 2){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Febbraio e' 28" << endl; 
		
	}
	
	if (mese == 3){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Marzo e' 31" << endl; 
		
	}

	if (mese == 4){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Aprile e' 30" << endl; 
		
	}
	
	if (mese == 5){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Maggio e' 31" << endl; 
		
	}
	
	if (mese == 6){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Giugno e' 30" << endl; 
		
	}
	
	if (mese == 7){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Luglio e' 31" << endl; 
		
	}	
	
	if (mese == 8){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Agosto e' 31" << endl; 
		
	}
	
	if (mese == 9){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Settembre e' 30" << endl; 
		
	}
	
	if (mese == 10){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Ottobre e' 31" << endl; 
		
	}
	
	if (mese == 11){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Novembre e' 30" << endl; 
		
	}
	
	if (mese == 12){
		
		cout << " " << endl;
		cout << "Il numero di giorni nel mese di Dicembre e' 31" << endl; 
		
	}
	
	cout << " " << endl;
	system ("PAUSE");
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cout << " " << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		goto inizio;
		
	}
	
	return 0;

}
