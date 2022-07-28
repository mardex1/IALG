#include <iostream> 
using namespace std;

int main(){
	int i = 1, a = 0, b = 0;
	char letra;
	
	while (i <= 10){
		cin >> letra;
		if (letra == 'a'){
			a = a + 1;
		}else if(letra == 'b'){
			b = b + 1;
		}
		i++;
	}
	if (a < b){
		cout << "1";
	}else
	cout << "0";
	
	return 0;
}

