#include <iostream>
using namespace std;

float Media(float a, float b){
	float total;
	total = (a + b)/2;
	
	return total;
}

int main (){
	float a, b;
	cin >> a >> b;
	
	cout << Media(a,b);

	return 0;
}
