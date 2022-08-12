#include <iostream>
using namespace std;


int main (){
    string frase;
    int vogais = 0;

    getline(cin,frase);

    for(int i = 0;i < frase.size();i++){
        if(frase[i] == 'a' or frase[i] == 'e' or frase[i] == 'i' or frase[i] == 'o' or frase[i] == 'u')
            vogais++;
    }

    cout << vogais << endl;
    
    return 0;
}     