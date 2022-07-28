#include <iostream>
using namespace std;

int fatorial(int n){
	int fator = 1, i = n;
	while(i > 1){
		fator = fator * i;
		i--;
	}
	return fator;
}

int main(){
	int num, i = 0, soma = 0;
	
	cin >> num;
	
	
	while(i < num){
		soma = soma + (fatorial(2*i))/(fatorial(i+1)*fatorial(i));
		i++;
	}
	
	num = num - 1;
	
	cout << soma << " " << endl;
	
	cout << (fatorial(2*num))/(fatorial(num+1)*fatorial(num));
	
	return 0;
}
		
		
