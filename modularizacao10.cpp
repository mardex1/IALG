#include <iostream>
using namespace std;

int tribo(int n){
	if(n == 1){
		return 1;
	}else if(n == 2){
		return 1;
	}else if(n == 3){
		return 2;
	}else{
		return tribo(n-1) + tribo(n-2) + tribo(n-3);
	}
}
		

int main (){
	int num, i = 1;
	
	cin >> num;
	
	while(i <= num){
		cout << tribo(i) << " ";
		i++;
	}
	
	return 0;
}
