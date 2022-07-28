#include <iostream>
using namespace std;

int main (){
	int num, i = 1, soma = 0;
	
	cin >> num;
	
	do{
		
		while(i < num){
			if(num%i == 0){
				soma = soma + i;
			}
			i++;
		}
		if(soma == num){
			cout << "perfeito" << endl;
		}else{
			cout << "nao perfeito" << endl;
		}
		i = 1;
		soma = 0;
		cin >> num;
		
	}while(num > 0);
	
	return 0;
}
	
		
