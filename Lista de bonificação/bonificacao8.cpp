#include <iostream>
using namespace std;

int maior (int a, int b){
    if(a >= b){
        return a;
    }else{
        return b;
    }
}

int main (){
    int num1, maiorn;
    char continua = 'S';
    
    cin >> num1 >> continua;

    maiorn = num1;

    maiorn = maior(maiorn, num1);

    while(continua != 'N'){
        cin >> num1 >> continua;
        maiorn = maior(maiorn, num1);
    }

    cout << maiorn << endl;

    return 0;
}
