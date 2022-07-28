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
	int num;
	
	cin >> num;
	
	cout << fatorial(num) << endl;
	
	return 0;
}
