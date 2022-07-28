#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int num, resultado, divisor = 1000000000, cont = 0, algfinal, alginicial;
	
	cin >> num;
	
	while(cont < 10){
		resultado = num / divisor;
		if(resultado >= 1 and resultado <= 9){
			algfinal = resultado;
			alginicial = num % 10;
			if(alginicial > algfinal){
				resultado = alginicial - algfinal;
				num = num - resultado;
				num = num + (resultado * divisor);
			}else if(algfinal > alginicial){
				resultado = algfinal - alginicial;
				num = num + resultado;
				num = num - (resultado * divisor);
			}
		}
		divisor = divisor / 10;
		cont++;
	}
		
	
	cout << num << endl;
	;

	return 0;
	
}
