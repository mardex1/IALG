#include <iostream>
using namespace std;

int main (){
    string frase;
    int tamanho;
    int vogais = 0;

    cin >> frase;

    tamanho = frase.size();

    for(int i = 0;i < tamanho;i++){
        if(frase[i] == 'a' or frase[i] == 'e' or frase[i] == 'i' or frase[i] == 'o' or frase[i] == 'u')
            vogais++;
    }

    cout << vogais << endl;
    
    return 0;
}     