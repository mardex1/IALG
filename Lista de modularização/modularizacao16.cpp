#include <iostream>
using namespace std;

int fib(int a){
	if (a == 0){
		return 0;
	}else if(a == 1){
		return 1;
	}else{
		return fib(a-1) + fib(a-2);
	}
}

int main (){
	int num, i = 0;
	
	cin >> num;
	
	while(i < num){
		cout << fib(i) << " ";
		i++;
	}
	
	return 0;
}
