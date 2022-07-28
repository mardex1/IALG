#include <iostream>
using namespace std;

int main (){
	//até 31 de julho:
	//Individual:30% de desconto
	//Equipes:15% de desconto
	//até 01 de agosto:
	//Individual:10% de desconto
	//Equipes:5% de desconto
	
	float taxa, soma = 0;
	int dia;
	char categoria;
	
	cin >> taxa >> dia >> categoria;
	
	do{
		if(dia <= 31 and dia >= 22){
			if(categoria == 'I'){
				soma = soma + (taxa*70/100);
			}else if(categoria == 'E'){
				soma = soma + (taxa*85/100);
			}
		}else if(dia >= 1 and dia <= 6){
			if(categoria == 'I'){
				soma = soma + (taxa*90/100);
			}else if(categoria == 'E'){
				soma = soma + (taxa*95/100);
			}
		}			
		
		cin >> dia >> categoria;
	}while(dia != -1);
	
	cout << soma << endl;
	
	return 0;
}
