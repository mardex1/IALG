#include <iostream>
using namespace std;

int main (){
	int num1, num2, resultado, i = 0;
	
	cin >> num1 >> num2;
	
	if(num1 >= num2){
		resultado = num1;
		do{
			resultado = resultado - num2;
			i++;
		}while(resultado >= num2);
		
		cout << resultado << endl << i << endl;
		
	}else if(num2 > num1){
		resultado = num2;
		do{
			resultado = resultado - num1;
			i++;
		}while(resultado >= num1);
		
		cout << resultado << endl << i << endl;
		
	}
	
	return 0;
}
			 
			
