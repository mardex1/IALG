#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int i = 0, num;
	double pi = 1, cont = sqrt(2);
	
	cin >> num;
	
	while(i < num){
		pi = (pi * cont)/2;
		cont = (sqrt(2 + cont));
		i++;
	}
	
	cout << 2/pi << endl;
	
	return 0;
}
