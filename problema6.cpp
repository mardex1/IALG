#include <iostream>
using namespace std;

int main(){
	int fib1 = 0, fib2 = 1, aux, i = 2, num;
	
	cin >> num;
	
	if(num == 1){
		cout << fib1;
	}else if(num == 2){
		cout << fib1 << endl << fib2;
	}else{
		cout << fib1 << endl<< fib2 << endl;
		while(i < num){
			aux = fib1;
			fib1 = fib2;
			fib2 = fib1 + aux;
			cout << fib2 << endl;
			i++;
		}
	}
	
	return 0;
}

		
