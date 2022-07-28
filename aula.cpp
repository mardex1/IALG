#include <iostream>
using namespace std;

int primo (int numero){
	int i = 0, divisores = 1;
	while (divisores <= numero){
		if(numero % divisores == 0){
			i++;
		}
		divisores++;
	}

	if(i == 2)
		return 1;
	else
		return 0;
	}
int somaPrimos (int num){
	int i = 0, soma = 0, resposta;
	while (i < num){
		resposta = primo(num);
		if(resposta == 1){
			cout << num << endl;
			soma = soma + num;
			i++;
		}
		num++;
	}
	
	return soma;
}		

int main (){
	
	int numero; 
	cin >> numero;
	cout << somaPrimos(numero);
	
	return 0;
}

	
	
