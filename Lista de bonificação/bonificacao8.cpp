#include <iostream>
using namespace std;

int maior (int a, int b){
    if(b > a){
        return b;
    }else if(a >= b){
        return a;
    }
}

int main (){
    char continua;
    int i = 0, num1, aux, resultado;

    cin >> num1 >> continua;

   while(continua == 'S'){
    aux = num1;
    cin >> num1;
    resultado = maior(num1, aux)
    cin >> continua;
   }
    
    cout << maior(num1, aux)


    return 0;
}