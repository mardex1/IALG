#include <iostream>
using namespace std;

void imprime (int n){
	int linha=0 , letra, cont;
	while (linha < n){
		letra = 97;
		cont = 0;
		while (cont <= linha){
			cout << char(letra + cont) << " ";
			cont++;
		}
		cout << endl;
		linha++;
	}
}
	

int main(){
	int n;
	cin >> n;
	
	imprime(n);
	return 0;
}
