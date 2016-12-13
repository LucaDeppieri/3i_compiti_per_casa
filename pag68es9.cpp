// Pag 68 es 9

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (void){
	
	partenza:
	int ctr;
	int a;
	int b;
	int c;
	float diff;
	int num_max = 0;
	int num_min = 0;
	char continuo;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl << endl;
	cout << "Inserisci il primo numero: ";
	cin >> a;
	cout << endl;
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	cout << endl;
	cout << "Inserisci il terzo numero: ";
	cin >> c;
	cout << endl << endl;
	if ((a > b) && (a > c)){
		
		if (b > c){
			
			num_max = a;
			num_min = c;
			diff = a - b;
			cout << "La differenza tra il numero maggiore (" << a << ") e il numero minore (" << c << ") e\': " << diff << endl;
			
		}
		else{
			
			if (c > b){
				
				num_max = a;
				num_min = b;
				diff = a - b;
				cout << "La differenza tra il numero maggiore (" << a << ") e il numero minore (" << b << ") e\': " << diff << endl;
				
			}
			
		}
		
	}
	else{
		
		if ((b > a) && (b > c)){
			
			if (a > c){
			
				num_max = b;
				num_min = c;
				diff = b - c;
				cout << "La differenza tra il numero maggiore (" << b << ") e il numero minore (" << c << ") e\': " << diff << endl;
			
			}
			else{
				
				if (c > a){
					
					num_max = b;
					num_min = a;
					diff = b - a;
					cout << "La differenza tra il numero maggiore (" << b << ") e il numero minore (" << a << ") e\': " << diff << endl;
					
				}
				
			}
			
		}
		else{
			
			if ((c > a) && (c > b)){
				
				if (a > b){
				
					num_max = c;
					num_min = b;
					diff = c - b;
					cout << "La differenza tra il numero maggiore (" << c << ") e il numero minore (" << b<< ") e\': " << diff << endl;
				
				}
				else{
					
					if (b > a){
						
						num_max = c;
						num_min = a;
						diff = c - a;
						cout << "La differenza tra il numero maggiore (" << c << ") e il numero minore (" << a << ") e\': " << diff << endl;
						
					}
					
				}
					
			}
			
		}
		
	}
	
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
