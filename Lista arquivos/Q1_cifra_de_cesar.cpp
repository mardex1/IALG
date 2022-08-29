#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string nome;
    cin >> nome;
    ifstream arquivo (nome);
    ofstream escrita ("cifrado");
    if(arquivo){
        char frase;
        while(arquivo.get(frase)){
            if(frase == 'X'){
                frase = 'A';
            }
            else if(frase == 'Y'){
                frase = 'B';
            }
            else if(frase == 'Z'){
                frase = 'C';
            }else if(frase == ' '){
                frase = ' ';
            }
            else{
                frase = frase + 3;
            }
            escrita << frase;
        }
    }else{
        cout << "arquivo nao encontrado" << endl;
    }

    return 0;
}