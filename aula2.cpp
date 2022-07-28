#include <iostream>
using namespace std;

int fatorial(int num){
	int i = 1, fator = 0, cont = 2;
	while (cont <= num){
		fator = num * (num - i);
		i--;
		cont++;
	}
	return fator;
}

int main (){
	int num;
	cin >> num;
	
	cout << fatorial(num);
	return 0;
}
