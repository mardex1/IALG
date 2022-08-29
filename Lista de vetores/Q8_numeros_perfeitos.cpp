#include <iostream>
using namespace std;

int main (){
    int num;
    int i = 1;

    cin >> num;

    int divisores[num/2];

    while(i < num/2){
        if(num % i == 0){
            divisores[i-1] = i;
        }
        i++;    
    }
    
    for(int i = 0;i < num/2;i++){
        cout << divisores[i] << " ";
    }cout << endl;
    
    return 0;
}