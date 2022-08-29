#include <iostream>
using namespace std;

int main (){
    int numeros[20];
    int j = 0, k = 0;
    int j1 = 0, k1 = 0;

    for(int i = 0;i < 20;i++){
        cin >> numeros[i];
    }

    for(int i = 0;i < 20;i++){
        if(numeros[i] % 2 == 0){
            j++;
        }else{  
            k++;
        }
    }

    int pares[j];
    int impares[k];

    for(int i = 0;i < 20;i++){
        if(numeros[i] % 2 == 0){
            pares[j1] = numeros[i];
            j1++;
        }else{
            impares[k1] = numeros[i];
            k1++;
        }
    }

    for(int i = 0;i < j;i++){
        cout << pares[i] << " ";
    }cout << endl;

    for(int i = 0;i < k;i++){
        cout << impares[i] << " ";
    }cout << endl;

    return 0;
}