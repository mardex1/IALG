#include <iostream>
using namespace std;


int main (){
    unsigned tamanho;
    cin >> tamanho;

    int vetorA[tamanho], vetorB[tamanho], num;
    float produtoescalar = 0;

    for(int i = 0;i < tamanho;i++){
        cin >> num;
        vetorA[i] = num;
    }
    for(int i = 0;i < tamanho;i++){
        cin >> num;
        vetorB[i] = num;
    }
    for(int i = 0;i < tamanho;i++){
        produtoescalar = produtoescalar + vetorA[i]*vetorB[i];
    }

    cout << produtoescalar << endl;
    
    return 0;
}