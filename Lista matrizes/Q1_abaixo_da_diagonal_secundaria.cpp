#include <iostream>
using namespace std;

int main (){
    int n, soma = 0;

    cin >> n;

    int matriz[n][n];
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i+j >= n){
                cout << matriz[i][j] << " ";
                soma += matriz[i][j];
            }
        }
    }cout << endl;

    cout << soma << endl;

    /*Alocação dinâmica:
    int** matriz = new int*[tam];

    for(unsigned i = 0;i < tam;i++){
        matriz[i] = new int[tam];
    }//Cada linha é um vetor e cada elemento sua coluna.

    for(unsigned i = 0;i < tam;i++){
        delete[] matriz[i];
    }
    delete[] matriz;*/

    return 0;
}