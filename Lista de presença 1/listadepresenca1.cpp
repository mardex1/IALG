#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int soldado, soma = 0, i = 1;
	
	cin >> soldado;
	
	while(soma < soldado){
		soma = soma + i;
		i++;
	}
	
	i--;
	
	cout << i << endl;
	
	return 0;
}
