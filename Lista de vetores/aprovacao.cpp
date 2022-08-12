#include <iostream>
using namespace std;

int main (){
    char gabarito[10];
    int alunos, acertos = 0;
    int j = 0;

    for(int i = 0;i < 10;i++) 
        cin >> gabarito[i];

    cin >> alunos;

    char respostas[10];

    for(int i = 0;i < alunos;i++){
        for(int i = 0;i < 10;i++){
            cin >> respostas[i];
            if(respostas[i] == gabarito[i]){
                acertos++;
            }
        }
        if(acertos >= 6){
            cout << acertos << endl;
            cout << "APROVADO" << endl;
        }else if(acertos < 6){
            cout << acertos << endl;
            cout << "REPROVADO" << endl;
        }
        acertos = 0;
    }


    return 0;
}