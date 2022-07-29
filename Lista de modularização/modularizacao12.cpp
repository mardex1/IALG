#include <iostream>
using namespace std;

int somasucessivas (int a, int b){
	if(b==1){
		return a;
	}else if(b==0){
		return 0;
	}else{
		return a+somasucessivas(a,b-1);
	}
}
		

int main (){
	int num1, num2;
	
	cin >> num1 >> num2;
	
	cout << somasucessivas(num1, num2) << endl;
	
	return 0;
}
