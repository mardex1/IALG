#include <iostream>
using namespace std;

int apaga(int vet[], int tam){
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

int ajeita(int vet[], int tam){
    int vetnovo[tam];
    for(int i = 0;i < tam;i++){
        if(vet[i] != -1){
            vetnovo[i] = vet[i];
        }
    }
    return vetnovo[3];
}

int main (){
    int num;
    unsigned tamanho;

    cin >> tamanho;

    int vetor[tamanho];

    for(int i = 0;i < tamanho;i++){
        cin >> num;
        vetor[i] = num;
    }

    cout << apaga(vetor, tamanho) << endl;

    cout << ajeita(vetor, tamanho) << endl;

    
    
    return 0;
}