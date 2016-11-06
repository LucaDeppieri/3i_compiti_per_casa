// Pag 69 es 22

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(void){

	partenza:
    int N;
    int num;
    int X;
    int ctr;
    int num_max=0;
    int num_min=0;
    int num_uguali=0;
    char continuo;

	cout << " " << endl;
    cout << "Quanti numeri interi vuoi inserire?" << endl;
    inizio1:
	cin >> N;
    if (N <= 0){
    	
    	cout << " " << endl;
    	cout << "ERRORE, devi inserire un numero piu' grande di 0" << endl;
    	cout << " " << endl;
    	goto inizio1;
    	
    }
    
    cout << " " << endl;
    cout << "Inserisci un numero intero, sara' utilizzato come riferimento: ";
    cin >> X;
    
    for(ctr = 0; ctr < N; ctr++){
    	
    	cout << " " << endl;
        cout << "Digitare un numero intero: ";
        cin >> num;
        if (num > X){
        	
        	num_max++;
        	
        } 
        if (num < X){
        	
        	num_min++;
        	
        }   
        if (num == X){
        	
        	num_uguali++;
        	
        }
   
    }
    cout << " " << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << " " << endl;
    cout << "I numeri inseriti maggiori di " << X << " sono " << num_max << endl;
    cout << "I numeri inseriti minori di " << X << " sono " << num_min << endl;
    cout << "I numeri inseriti uguali a " << X << " sono " << num_uguali << endl;
    cout << " " << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << " " << endl;
    system ("PAUSE");
    cout << " " << endl;
    cout << "Vuoi ricominciare il programma? (s / n)" << endl;
    cin >> continuo;
    if (continuo == 's'){
    	
    	goto partenza;
    	
    }

	return 0;
}
