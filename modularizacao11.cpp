#include <iostream>
using namespace std;

int ricci(int r1, int r2, int quantidade){
	if(quantidade == 0){
		return r1;
	}else if(quantidade == 1){
		return r2;
	}else{
		return ricci(r1, r2, quantidade - 1) + ricci(r1, r2, quantidade - 2);
	}
}
	
	

int main (){
	int num1, num2, n, i = 0;
	
	cin >> num1 >> num2 >> n;
	
	while(i < n){
		cout << ricci(num1, num2, i) << " ";
		i++;
	}
	
	return 0;
}
