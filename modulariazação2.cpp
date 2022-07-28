#include <iostream>
using namespace std;

string funcao(int mes){
	string resultado;
	switch(mes){
		case 1:
		resultado = "janeiro";
		break;
		case 2:
		resultado = "fevereiro";
		break;
		case 3:
		resultado = "marco";
		break;
		case 4:
		resultado = "abril";
		break;
		case 5:
		resultado = "maio";
		break;
		case 6:
		resultado = "junho";
		break;
		case 7:
		resultado = "julho";
		break;
		case 8:
		resultado = "agosto";
		break;
		case 9:
		resultado = "setembro";
		break;
		case 10:
		resultado = "outubro";
		break;
		case 11:
		resultado = "novembro";
		break;
		case 12:
		resultado = "dezembro";
		break;
		default:
		resultado = "erro";
	}
	return resultado;
}

int main(){
	int mes;
	cin >> mes;
	
	cout << funcao(mes);
	
	return 0;
}
