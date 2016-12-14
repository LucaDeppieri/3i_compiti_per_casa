// Pag 54 es 1

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	int num;
	int k = 1;
	int sommanumeri = 0;
	cout << "Inserire un numero positivo: ";
	cin >> num;
	while (k <= num){
		
		sommanumeri = sommanumeri + k;
		k++;
		
	}
	cout << "La somma dei numeri da 1 a " << num << " e\' " << sommanumeri << endl;
	system ("PAUSE");
	
}
