#include <iostream>
using namespace std;

int main (){
	float n1, n2, nota_maior, nota_menor;
	int maior, segundo_maior, m1, m2;
	
	cin >> m1 >> n1 >> m2 >> n2;
	
	if (n1 >= n2){
		nota_maior = n1;
		nota_menor = n2;
		maior = m1;
		segundo_maior = m2;
	}
	else if (n2 >= n1){
		nota_maior = n2;
		nota_menor = n1;
		maior = m2;
		segundo_maior = m1;
	}
	
	while (m1 != 0){
		cin >> m1;
		while(m1 != 0){
			cin >> n1;
			if (n1 >= nota_maior){
				nota_menor = nota_maior;
				nota_maior = n1;
				segundo_maior = maior;
				maior = m1;
			}else if(n1 <= nota_maior and n1 >= nota_menor){
				nota_menor = n1;
				segundo_maior = m1;
			}
			cin >> m1;
		}
		
	}
	
	cout << maior << " " << nota_maior << endl << segundo_maior
	<< " " << nota_menor << endl;
	
	return 0;
}
		
