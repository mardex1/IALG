#include <iostream>
using namespace std;

int main (){
    char vetorA[10];
    char vetorB[10];
    char aux;
    int j = 9;

    for(int i = 0;i < 10;i++){
        cin >> vetorA[i];
    }
    for(int i = 0;i < 10;i++){
        cin >> vetorB[i];
    }

    for(int i = 0;i < 10;i++){
        if((i+1) % 2 != 0){
            aux = vetorB[j];
            vetorB[j] = vetorA[i];
            vetorA[i] = aux;
            j--;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << vetorA[i] << " ";
    }cout << endl;

    for(int i = 0;i < 10; i++){
        cout << vetorB[i] << " ";
    }cout << endl;

    return 0;
}