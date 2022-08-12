#include <iostream>
using namespace std;

string romano(int a){
	int dezenas, unidades;
	string resultadoD, resultadoU;
	if(a == 0 or a > 50){
		return "NUMERO INVALIDO";
	}
	dezenas = a / 10;
	unidades = a % 10;
	switch(dezenas){
		case 1:
		resultadoD = "X";
		break;
		case 2:
		resultadoD = "XX";
		break;
		case 3:
		resultadoD = "XXX";
		break;
		case 4:
		resultadoD = "XL";
		break;
		case 5:
		resultadoD = "L";
		break;
	}
	switch(unidades){
		case 1:
		resultadoU = "I";
		break;
		case 2:
		resultadoU = "II";
		break;
		case 3:
		resultadoU = "III";
		break;
		case 4:
		resultadoU = "IV";
		break;
		case 5:
		resultadoU = "V";
		break;
		case 6:
		resultadoU = "VI";
		break;
		case 7:
		resultadoU = "VII";
		break;
		case 8:
		resultadoU = "VIII";
		break;
		case 9:
		resultadoU = "IX";
		break;
	}
	return resultadoD + resultadoU;
}

int main (){
	int num;
	
	cin >> num;
	
	do{
		cout << romano(num) << endl;
		cin >> num;
	}while(num >= 0);

	return 0;
}
