#include <iostream>
using namespace std;

int horizontal(char matriz[3][3]){

}

int main (){
    char matriz[3][3];
    bool encontrou = false;
    int i = 0;

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            cin >> matriz[i][j];
        }
    }
    
    while(encontrou = false and i < 3){
        for(int j = 0;j < 3;j++){
            if(matriz[i][j] == 'X' or matriz[i][j] == 'O'){
                horizontal(matriz, i, j);
                vertical(matriz, i, j);
            }
        }
    }
        

    return 0;
}