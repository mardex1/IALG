#include <iostream>
using namespace std;

int substituir(int vet[], int tam){
    int validos = 0;
    for(int i = 0;i < tam;i++){
        if(vet[i] % 3 == 0){
            vet[i] = -1;
        }
    }
    for(int i = 0;i < tam;i++){
        if(vet[i] != -1){
            validos++;
        }
    }
    return validos;
}

void apaga(int vet[], int tam, int valido){
    int aux = 0;
    for(int i = 0;i < (tam-valido);i++){
        for(int i = 0;i < tam;i++){
            if(vet[i] == -1){
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;
            }
        }
    }
    for(int i = 0;i < valido;i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}   

int main (){
    int num;
    int tamanho, valido;

    cin >> tamanho;

    int vetor[tamanho];

    for(int i = 0;i < tamanho;i++){
        cin >> num;
        vetor[i] = num;
    }

    valido = substituir(vetor, tamanho);

    apaga(vetor, tamanho, valido);
    
    cout << valido << endl;

    return 0;
}