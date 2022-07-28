#include <iostream>
using namespace std;

int main (){
	int num, multiplicacao, v1 = 1, v2 = 2, v3 = 3, i = 0;
	
	cin >> num;
	
	do{
		multiplicacao = (v1+i)*(v2+i)*(v3+i);
		i++;
	}while(multiplicacao < num);
	
	i--;
	
	if(multiplicacao == num){
		cout << "TRIANGULAR" << " " << v1+i << " " << v2+i << " " << v3+i << endl;
	}else{
		cout << "NAO TRIANGULAR" << endl;
	}
	
	return 0;
}
	
	
