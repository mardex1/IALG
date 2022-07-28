#include <iostream>
using namespace std;

int main (){
	int num, i = 0, respostas, cont = 0, letra = 97;
	char resultado;
	
	cin >> num;
	
	while(i < num){
		while(cont < 5){
			cin >> respostas;
			if(respostas <= 127){
				resultado = char(letra + cont);
				
			}
			cont++;

		}		
		i++;
		cont = 0;
		cout << resultado;
	}
	
	
	return 0;
}
