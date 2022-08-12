#include <iostream>
using namespace std;

void imprime(int vet[], int tam){
    cout << "[";
    for(int i = 0;i < tam;i++){
        if(i < tam - 1){
            cout << vet[i] << ", ";
        }else if(i == tam - 1){
            cout << vet[i];
        }
    }
    cout << "]";    
}

int main (){
    int tamanho;
    int num;

    cin >> tamanho;

    int vetor[tamanho];

    for(int i = 0;i < tamanho;i++){
        cin >> num;
        vetor[i] = num;
    }

    imprime(vetor, tamanho);

    return 0;
}