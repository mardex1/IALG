#include <iostream>
using namespace std;

int procura(int vetor[], unsigned tam, int procurado){
    int posicao = -1;
    for(int i = 0;i < tam;i++){
        if(vetor[i] == procurado){
            posicao = i;
            i = tam;
        }
        
    }
    return posicao;
}

int main (){
    unsigned tamanho;
    int num, procurado;

    cin >> tamanho;

    int vetor[tamanho];

    for(int i = 0;i < tamanho;i++){
        cin >> num;
        vetor[i] = num;
    }

    cin >> procurado;

    cout << procura(vetor, tamanho, procurado) << endl;

    return 0;
}