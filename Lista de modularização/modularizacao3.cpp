#include <iostream>
using namespace std;

float centimetro(float a);

float metro (float a){
	float cm;
	cm = a * 100;
	return cm;
}
float centimetro(float a){
	float m;
	m = a / 100;
	return m;
}
	
int main (){
	string unidade;
	float num;
	
	cin >> num >> unidade;
	
	if(unidade == "centimetro"){
		cout << metro(num) << " cm" << endl;
	}else if(unidade == "metro"){
		cout << centimetro(num) << " m" << endl;
	}else{
		cout << "ERRO" << endl;
	}
	
	return 0;
}
