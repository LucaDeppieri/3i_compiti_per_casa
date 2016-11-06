// Pag 68 es 13

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int primo_num;
	int secondo_num;
	cout << " " << endl;
	cout << "Inserisci il primo numero intero: ";
	cin >> primo_num;
	cout << " " << endl;
	cout << "Inserisci il secondo numero intero: ";
	cin >> secondo_num;
	int somma;
	int sottr;
	int molti;
	int divis;
	int resto;
	int domanda;
	char continuo;
	cout << " " << endl;
	cout << "Che operazione vuoi svolgere con questi due numeri?" << endl << "[1] Somma" << endl << "[2] Sottrazione" << endl << "[3] Moltiplicazione" << endl << "[4] Divisione" << endl;
	cout << " " << endl;
	inizio:
	cin >> domanda;
	cout << " " << endl;
	
	if ((domanda <= 0) || (domanda > 4)){
		
		cout << "ERRORE, ci sono solamente 4 opzioni! Reinserire il numero! ";
		goto inizio;
		
	}
	
	if (domanda == 1){
		
		somma = primo_num + secondo_num;
		cout << "Il risultato della somma fra i due numeri interi e': " << somma << endl;
		cout << " " << endl;
		
	}
	
	if (domanda == 2){
		
		sottr = primo_num - secondo_num;
		cout << "Il risultato della sottrazione fra i due numeri interi e': " << sottr << endl;
		cout << " " << endl;
		
	}
	
	if (domanda == 3){
		
		molti = primo_num * secondo_num;
		cout << "Il risultato della moltiplicazione fra i due numeri interi e': " << molti << endl;
		cout << " " << endl;
		
	}
	
	if (domanda == 4){
		
		divis = primo_num / secondo_num;
		resto = primo_num % secondo_num;
		cout << "Il risultato della divisione fra i due numeri interi e': " << divis << endl << "Il resto della divisione e': " << resto << endl;
		cout << " " << endl;
		
	}
	
	system ("PAUSE");
	cout << " " << endl;
	cout << "Vuoi ricominciare il programma? (s / n)" << endl;
	cout << " " << endl;
	cin >> continuo;
	if (continuo == 's'){
		
		cout << " " << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		goto partenza;
		
	}
	
	return 0;
	
}
