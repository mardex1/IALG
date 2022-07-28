#include <iostream>
using namespace std;

int multiplicacao(int num, int quantidade){
	if(quantidade == 1){
		return num;
	}else if(quantidade == 2){
		return num + num;
	}else{
		return multiplicacao(num, quantidade)
	}
}
		

int main (){
	int num1, num2;
	
	cin >> num1 >> num2;
	
	cout << multiplicacao(num1, num2) << endl;
	
	return 0;
}
