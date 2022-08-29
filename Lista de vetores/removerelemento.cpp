#include <iostream>
using namespace std;

int main (){
    unsigned tamanho;
    int num, procurado, aux = -1;

    cin >> tamanho;
    
    int vetor[tamanho];

    for(int i = 0;i < tamanho;i++)
        cin >> vetor[i];
    cin >> procurado;

    for(int i = 0;i < tamanho;i++){
        if(vetor[i] == procurado){
            aux = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = aux;
        }
    }

    if(aux != -1){
        for(int i = 0;i < tamanho-1;i++) cout << vetor[i] << " ";
        cout << endl;
    }else{
        cout << "ELEMENTO NAO ENCONTRADO" << endl;
    }
   
    
    return 0;
}