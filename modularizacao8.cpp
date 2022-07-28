#include <iostream>
using namespace std;

float parcelas(int n){
	float soma = 0;
	float i = 1;
	while(i <= n){
		soma = soma + (i*(i + 1))/(i + 3);
		i++;
	}
	return soma;
}

int main (){
	float num;
	
	cin >> num;
	
	cout << parcelas(num) << endl;
	
	return 0;
}
