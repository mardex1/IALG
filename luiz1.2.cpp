#include <iostream>
using namespace std;

int main (){
	int d;
	float i, l, soma = 0;
	char cat;
	
	cin >> i;
	
	do{
		cin >> d >> cat;
		
		if(d != -1){
			if(d >= 22 and d <= 31){
				if(cat == 'I'){
					l = 0.7 * i;
				}else if(cat == 'E'){
					l = 0.85 * i;
				}
			}else if(d >= 1 and d <= 6){
				if (cat == 'I'){
					l = 0.9 * i;
				}else if(cat == 'E'){
					l = 0.95 * i;
				}
			}
			
			soma = soma + l;
		}
	}while(d != -1);
	
	cout << soma << endl;
	
	return 0;
}
