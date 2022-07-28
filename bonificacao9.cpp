#include <iostream>
using namespace std;

int exponencial(int k, int n){
	if(n == 0){
		return 1;
	}else{
		return k*exponencial(k , n-1);
	}
}

int main (){
	int base, expoente;
	
	cin >> base >> expoente;
	
	cout << exponencial(base, expoente) << endl;
	
	return 0;
}
	
