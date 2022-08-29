#include <iostream>
using namespace std;

int main (){
    int num_palavras;
    int maior;

    cin >> num_palavras;

    string frase;
    int total = 0;

    for(int i = 0;i < num_palavras;i++){
        frase = getline(cin,frase);
        total = total + frase.size();
    }

    cout << frase[0] << endl;

    return 0;
}