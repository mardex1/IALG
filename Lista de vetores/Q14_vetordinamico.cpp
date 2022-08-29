#include <iostream>
using namespace std;

int *realoca(int *ptr, int &tamanho){
    int *novovetor = new int[tamanho+5];
    tamanho = tamanho + 5;
    for(int i = 0;i < tamanho;i++){
        novovetor[i] = ptr[i];
    }
    delete[] ptr;
    return novovetor;
}

int main (){    
    int *ptr = new int[5];
    int capacidade = 5;
    int realocacoes = 0;
    int i = 0;
    int valor;

    cin >> valor;

    while(valor > 0){
        if(i == capacidade){
            ptr = realoca(ptr, capacidade);
            realocacoes++;
        }
        ptr[i] = valor;
        i++;

        cin >> valor;
    }

    for(int k = 0;k < i;k++){
        cout << ptr[k] << " ";
    }cout << endl;

    cout << capacidade << endl << realocacoes << endl;

    delete[] ptr;

    return 0;
}