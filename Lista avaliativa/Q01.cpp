#include <iostream>
using namespace std;

int main(){
    string palavra;
    int tam;
    
    cin >> palavra;

    tam = palavra.size();

    for(int i = 0;i < tam;i++){
        if(palavra[i] == palavra[i+1]){
            while(palavra[i] == palavra[i+1]){
                palavra[i] = '?';
                i++;
            }   
        }
    }

    for(int i = 0;i < tam;i++){
        if(palavra[i] != '?'){
            cout << palavra[i];
        }
    }cout << endl;
    
    return 0;
}