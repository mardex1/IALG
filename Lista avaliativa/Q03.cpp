#include <iostream>
using namespace std;

int main (){
    int n;
    int linha, coluna;
    int peoes = 0;

    cin >> n;

    int matriz[n][n];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(matriz[i][j] == 1){
                linha = i;
                coluna = j;
            }
        }
    }
    //while(matriz[i][j] != 2){

    if((coluna-1 >= 0)and(linha-2 >= 0)){
        if(matriz[linha-2][coluna-1] == 2){
            peoes++;
        }
    }
    if((coluna+1 < n)and(linha-2 >= 0)){
        if(matriz[linha-2][coluna+1] == 2){
            peoes++;
        }
    }
    if((coluna+2 < n)and(linha+1 < n)){
        if(matriz[linha+1][coluna+2] == 2){
            peoes++;
        }
    }
    if((coluna+2 < n)and(linha-1 >= 0)){
        if(matriz[linha-1][coluna+2] == 2){
            peoes++;
        }
    }
    if((coluna+1 < n)and(linha+2 < n)){
        if(matriz[linha+2][coluna+1] == 2){
            peoes++;
        }
    }
    if((coluna-1 >= 0)and(linha+2 < n)){
        if(matriz[linha+2][coluna-1] == 2){
            peoes++;
        }
    }
    if((coluna-2 >= 0)and(linha+1 < n)){
        if(matriz[linha+1][coluna-2] == 2){
            peoes++;
        }
    }
    if((coluna-2 >= 0)and(linha-1 >= 0)){
        if(matriz[linha-1][coluna-2] == 2){
            peoes++;
        }
    }

    cout << peoes << endl;

    return 0;
}