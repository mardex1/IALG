#include <iostream>
using namespace std;
int main (){
	float altura, maior_altura, menor_altura, media_total = 0;
	float alturaM = 0, alturaH = 0;
	char genero;
	int mulher = 0, homem = 0, i = 0, fichas;
	
	cin >> fichas;
	
	cin >> altura >> genero;
	
	maior_altura = altura;
	menor_altura = altura;

		while(i < fichas){
			if(altura >= maior_altura){
				maior_altura = altura;
			}else if(altura <= menor_altura){
				menor_altura = altura;
			}
			if(genero == 'm'){
				homem = homem + 1;
				alturaH = alturaH + altura;
			}else if(genero == 'f'){
				mulher = mulher + 1;
				alturaM = alturaM + altura;
			}
			media_total = media_total + altura;
			i++;
			if(i != fichas){
				cin >> altura >> genero;
			}
		}
	
	cout << maior_altura << endl << menor_altura << endl;
	
	if(mulher == 0){
		cout << "erro" << endl;
	}else{
		cout << alturaM/mulher << endl;
	}if(homem == 0){
		cout << "erro" << endl;
	}else{
		cout << alturaH/homem << endl;
	}
	cout << media_total/(homem + mulher) << endl;
	
	return 0;
}
			
