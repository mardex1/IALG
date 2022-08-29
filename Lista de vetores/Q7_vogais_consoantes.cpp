#include <iostream>
using namespace std;

int main (){
    string palavra;
    int tamanho;
    int vogais = 0;
    int consoantes = 0;

    cin >> palavra;

    tamanho = palavra.size();

    for(int i = 0;i < tamanho;i++){
        if(palavra [i] == 'a' or palavra [i] == 'e' or palavra [i] == 'i' or palavra [i] == 'o' or palavra [i] == 'u'){
            vogais++;
        }else{
            consoantes++;
        }
    }

    cout << vogais << endl;
    cout << consoantes << endl;

    return 0;
}