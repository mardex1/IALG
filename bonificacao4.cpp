#include <iostream>
using namespace std;

int main (){
	int v1, v2, v3, v4, num, par = 0, impar = 0;;
	
	cin >> v1 >> v2 >> v3 >> v4 >> num;
	
	do{
		if((num >= 1 and num < v1)and(num%2==0)){
			par++;
		}else if((num >= v2 and num < v3)and(num%2==0)){
			par++;
		}else if((num >= v1 and num < v2)and(num%2!=0)){
			impar++;
		}else if((num >= v3 and num < v4)and(num%2!=0)){
			impar++;
		}
		
		cin >> num;
		
	}while(num > 0);
	
	cout << par << endl << impar << endl;
	
	return 0;
}
