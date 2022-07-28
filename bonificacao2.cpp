#include <iostream>
using namespace std;

int main(){
    float x1, y1, x2, y2, cord1, cord2;
    char tipo;

    cin >> x1 >> y1 >> x2 >> y2 >> tipo >> cord1;
    
	if(tipo == 'x'){
		if((x1 >= x2)and((cord1>x1)or(cord1<x2))){
			cout << "nenhuma" << endl;
		}else if((x1 < x2)and((cord1<x1)or(cord1>x2))){
			cout << "nenhuma" << endl;
		}else{
			cord2 = ((cord1-x1)*y2+(x2-cord1)*y1)/((cord1-x1)+(x2-cord1));
			cout << cord2 << endl;
		}
	}else if(tipo == 'y'){
		if((y1 >= y2)and((cord1>y1)or(cord1<y2))){
			cout << "nenhuma" << endl;
		}else if((y1 < y2)and((cord1<y1)or(cord1>y2))){
			cout << "nenhuma" << endl;
		}else{	
			cord2 = ((cord1 - y1)*x2+(y2-cord1)*x1)/((cord1-y1)+(y2-cord1));
			cout << cord2 << endl;
		}
    }
	
    return 0;
}
