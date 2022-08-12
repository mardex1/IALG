#include <iostream>
using namespace std;

int main (){
    unsigned tamanho;
    int num, i = 0;

    cin >> tamanho;

    int vetor[tamanho];

    while(i < tamanho){
        cin >> num;
        if(num % 2 == 0){
            vetor[i] = num;
            i++;
        }
    }

    for(int i = 0;i < tamanho;i++){
        cout << vetor[i] << " ";
    }cout << endl;

    return 0;
}