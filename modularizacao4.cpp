#include <iostream>
using namespace std;

void piramide (int n){
	int cont = 0, i = 1;
	while(i <= n){
		while(cont < i){
			cout << cont + 1 << " ";
			cont++;
		}
		cont = 0;
		i++;
		cout << endl;
	}
}
			
int main(){
	int num;
	
	cin >> num;
	
	piramide(num);
	
	return 0;
}
