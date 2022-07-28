#include <iostream>
using namespace std;

int simplificar (int &a, int &b){
	int i = 2;
	if(a >= b){
		while(i < a){
			if(a % i == 0 and b % i == 0){
				a = a/i;
				b = b/i;
			}
			i++;
		}
	}else if (b > a){
		while(i < b){
			if(a % i == 0 and b % i == 0){
				a = a/i;
				b = b/i;
			}
			i++;
		}
	}
	return a;
}
		
int main(){
	int numerador, denominador;
	
	cin >> numerador >> denominador;
	
	cout << simplificar(numerador, denominador) << endl;
	
	cout << denominador << endl;
	
	return 0;
}
