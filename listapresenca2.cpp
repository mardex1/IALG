#include <iostream>
using namespace std;

int main(){
	int num, resto, alg3 , alg4;
	
	cin >> num;
	
	resto = num%100000;
	resto = resto%10000;
	alg3 = resto/1000;
	resto = resto%1000;
	alg4 = resto/100;
	
	if(((alg3 + alg4 == 7) or (alg3 + alg4 == 8)) and (alg3 * alg4 == 12)){
		cout << "Inimigo" << endl;
	}else{
		cout << "Amigo" << endl;
	}
	
	return 0;
}
