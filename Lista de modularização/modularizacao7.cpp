#include <iostream>
using namespace std;

void soma(int a, int b, int &c){
	c = a + b;
	cout << c << endl;
}
	

int main(){
	int num1, num2, resultado = 0;
	
	cin >> num1 >> num2;
	
	soma(num1, num2, resultado);
	
	return 0;
}
