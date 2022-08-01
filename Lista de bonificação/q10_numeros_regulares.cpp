#include <iostream>
using namespace std;

int primo(int a){
    int i = 1, cont = 0;;
    while(i <= a){
        while(a%i == 0){
            cont++;
            i++;
        }
        i++;
    }
    if(cont == 2){
        return a;
    }else{
        return 0;
    }
}

string regular (int a){
    int i = 2;
    if(a == 1 or a == 0){
        return "NAO REGULAR";
    }
    while (i <= 5){
        while(a%i == 0){
            if(primo(i) != 0){
                a = a/ i;
            }
        }
        i++;
        if(a == 1){
            return "REGULAR";
        }
    }
    return "NAO REGULAR";
}

int main(){
    int num, i=2, aux;

    cin >> num;

    aux = num;

    while (i <= num){
        while(num%i == 0){
            if(primo(i) != 0){
                num = num/ i;
                cout << i << " ";
            }
        }
        i++;
    }
    cout << endl;

    cout << regular(aux) << endl;
    
    return 0;
}