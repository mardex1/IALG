#include <iostream>
using namespace std;

int main (){
    string frase1, frase2;
    int tamanho;

    getline(cin, frase1);
    getline(cin, frase2);

    tamanho = frase1.size() + frase2.size();

    char *ptr = new char[tamanho];

    string fraseF;

    fraseF = frase1 + frase2;

    for(int i = 0;i < tamanho;i++){
        ptr[i] = fraseF[i];
        cout << ptr[i];
    }cout << endl;

    delete [] ptr;

    return 0;
}