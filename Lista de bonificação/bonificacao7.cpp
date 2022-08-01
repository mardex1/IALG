#include <iostream>
using namespace std;

string romano(int a){
	int i = 0;
	while(i < a/50){
		return "X";
		i++;
	}
}

int main (){
	int num;
	
	cin >> num;

	cout << romano(num) << endl;

	return 0;
}
