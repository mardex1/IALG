#include <iostream>
using namespace std;

int main (){
    int vetor[10] = {};
    int k;
    int valor;
    int p;

    cin >> k;

    for(int i = 0;i < k;i++){
        cin >> vetor[i];
    }
    
    cin >> valor >> p;

    for(int i = 0;i < 10;i++){
        if(i==p){
            for(int j = k;j >= p;j--){
                vetor[j+1] = vetor[j];
            }
        }
    }

    vetor[p] = valor;

    for(int i = 0;i < 10;i++){
        cout << vetor[i] << " ";
    }cout << endl;
    
    return 0;
}