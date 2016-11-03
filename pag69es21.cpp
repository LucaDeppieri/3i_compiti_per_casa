// Pag 69 es 21

#include <iostream>
#include <string>


using namespace std;

int main (void){
	
	partenza:
	int N;
    cout << "*****************************************************" << endl;
	cout << "                                                     " << endl;
	cout << "Quanti numeri vuoi immettere nel programma (N < 100)?" << endl;
	cout << "                                                     " << endl;
    cout << "*****************************************************" << endl;
    cout << "                                                     " << endl;
    inizio:
	cin >> N;
    int ctr = 1;
    int num, somma_disp = 0;
    int dividendo;
	int divisore = 2;
	int quoziente, resto;
	char continuo;

	if (N >= 100){
		
		cout << "*****************************************************" << endl;
		cout << "                                                     " << endl;
		cout << "Errore, inserisci un numero < 100 !" << endl;
		cout << "                                                     " << endl;
    	cout << "*****************************************************" << endl;
    	cout << "                                                     " << endl;
		goto inizio;
		
	}
	
	while (ctr <= N){
	
		cout << "                            " << endl;
		cout << "Inserisci un numero intero: ";
		cin >> num;
		
		dividendo = num;
		quoziente = dividendo / divisore;
		resto = dividendo % divisore;
		cout << dividendo << " / 2 = " << quoziente << endl << "Con resto: " << resto << endl;
		if (resto == 0){
			
			cout << num << " e' pari, NON partecipa al calcolo" << endl;
			cout << "             " << endl;
			
		}
		else{
			
			if (resto == 1 || resto == -1){
				
				cout << num << " e' dispari, partecipa al calcolo" << endl;
				cout << "                " << endl;
				somma_disp = somma_disp + dividendo;
				cout << "Somma parziale numeri dispari (" << ctr << " di " << N << ")= " << somma_disp << endl;
				cout << "                                                     " << endl;
				
			}
			
		}
		
		ctr++;
		
	}
	
	cout << "*****************************************************" << endl;
	cout << "                                                     " << endl;
	cout << "Risultato finale somma numeri dispari = " << somma_disp << endl;
	cout << "                                                     " << endl;
    cout << "*****************************************************" << endl;
    cout << "                                                     " << endl;
    cout << "                                                     " << endl;
	
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		goto partenza;	
		
	}
	
	return 0;
	
}
