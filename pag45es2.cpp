// Pag 45 es 2

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
 
using namespace std;

int main (){
	
	int voto;
	cout << "Inserire il voto: "; // Errore -<<-
	cin >> voto; // Errore -voti-
	if ((voto < 0) || (voto > 30)){ // Errore -or-
		
		cout << "Valore non corretto" << endl; // Errore assenza -<<-
		
	}
	else{ // Errore if(voto > 20)
		
		if (voto > 20){
			
			cout << "Hai passato l\'esame e puoi registrarlo!" << endl;
			
		}
		else{ // Errore if(voto >= 16)
			
			if (voto >= 16){
					
				cout << "Dovrai sostenere l\'esame se vuoi passare!" << endl;
					
			}
			else{
				
				cout << "Mi dispiace... Respinto" << endl; // Errore -respinto-
				
			}
			
		}
		
	}
	system ("PAUSE"); // Errore -'system' was not declared in this scope-
					  // Aggiungere #include <stdlib.h> & <stdio.h>
	
}
