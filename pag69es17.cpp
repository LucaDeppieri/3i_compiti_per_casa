// Pag 69 es 17

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int m2;
	float costo;
	float prov_agenzia;
	char distanza;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl << endl;
	cout << "Indica a che distanza dal centro vuoi l'appartamento:" << endl;
	cout << "[a] Centro" << endl << "[b] Zona 1" << endl << "[c] Zona 2" << endl << "[d] Zona 3" << endl << "[e] Periferia" << endl << endl;
	cin >> distanza;
	cout << endl;
	cout << "Inserisci la dimensione in m^2: ";
	cin >> m2;
	cout << endl;
	cout << "Inserisci la provvigione dell'agenzia: ";
	cin >> prov_agenzia;
	cout << endl;
	if (distanza == 'a'){
		
		costo = 1500 * m2;
		
	}
	if (distanza == 'b'){
		
		costo = 1200 * m2;
		
	}
	if (distanza == 'c'){
		
		costo = 1400 * m2;
		
	}
	if (distanza == 'd'){
		
		costo = 1300 * m2;
		
	}
	if (distanza == 'e'){
		
		costo = 1000 * m2;
		
	}
	costo = costo * (1 + prov_agenzia / 100);
	cout << "-------------------------------------------------------------------------------" << endl << "|" << endl;
	cout << "| L'importo finale corrisponde a: " << costo << " EURO" << endl << "|" << endl;
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
