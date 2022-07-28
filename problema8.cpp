#include <iostream>
using namespace std;
int main (){
	int i = 0, maior, segundo_maior, num1, num2;
	float soma = 0;
	
	cin >> num1 >> num2;
	
	if(num1 >= num2){
		maior = num1;
		segundo_maior = num2;
	}else if(num2 > num1){
		maior = num2;
		segundo_maior = num1;
	}
	
	while (i < 5){
		cin >> num1;
		if(num1 >= maior){
			soma = soma + segundo_maior;
			segundo_maior = maior;
			maior = num1;
			
		}else if(num1 < maior and num1 > segundo_maior){
			soma = soma + segundo_maior;
			segundo_maior = num1;
		}else{
			soma = soma + num1;
		}
		i++;
	}
	
	cout << maior << endl << segundo_maior << endl << (float)soma/5 << endl;
	return 0;
}
			
		
		
		
	
