#include <iostream>
using namespace std;

int main(){
    int cont = 1, i = 1, num;

    cin >> num;

    while (i <= num){
        
        while(cont <= num){
            if(i % 2 != 0){
				if(cont % 2 != 0){
					cout << ".";
					cont++;
				}else{
					cout << "#";
					cont++;
				}
			}else if(i % 2 == 0){
				if(cont % 2 != 0){
					cout << "#";
					cont++;
				}else{
					cout << ".";
					cont++;
				}
			}
		}
		cout << endl;
		i++;
		cont = 1;
	}
    
    return 0;
}
