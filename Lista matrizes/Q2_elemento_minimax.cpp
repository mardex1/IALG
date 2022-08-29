#include <iostream>
using namespace std;

int main (){
    int matriz[10][10];
    int linha_menor, coluna_menor;
    int minimax, maior;

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            cin >> matriz[i][j];
        }
    }

    maior = matriz[0][0];
    minimax = matriz[0][0];

    for(int m = 0;m < 10;m++){
        for(int n = 0;n < 10;n++){
            if(matriz[m][n] > maior){
                maior = matriz[m][n];
                linha_menor = m;
            }
        }
    }

    for(int j = 0;j < 10;j++){
        if(matriz[linha_menor][j] < minimax){
            minimax = matriz[linha_menor][j];
            coluna_menor = j;
        }
    }cout << endl;

    cout << minimax << endl << linha_menor << " " << coluna_menor << endl;

    return 0;
}