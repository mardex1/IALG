#include <iostream>
using namespace std;

int main (){
	int i = 1,numtriangulo = 1,num, cont = 2;
	
	cin >> num;
	
	while(i < num){
		numtriangulo = numtriangulo + cont;
		i++;
		cont++;
	}
	
	cout << numtriangulo << endl;
		
	return 0;
}
	
	
