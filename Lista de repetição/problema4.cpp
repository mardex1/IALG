#include <iostream>
using namespace std;

int main (){
	int i = 0, num, letra = 97, cont = 0;
	
	cin >> num;
	
	while(i < num){
		while(cont <= i){
			cout << (char)(letra + cont) << " ";
			cont++;
		}
		cout << endl;
		i++;
		cont = 0;
		letra = 97;
	}
		
			
		
	return 0;
}
