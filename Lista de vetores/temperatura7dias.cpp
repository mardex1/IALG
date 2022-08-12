#include <iostream>
using namespace std;

float media(float vet[],unsigned tam){
    float soma = 0;
    for(int i = 0;i < tam;i++){
        soma += vet[i];
    }
    return soma/tam;
}


int main (){
    float temperaturas[7], temp, maior, menor;
    float soma = 0;
    unsigned abaixo_da_media = 0;

    for(int i = 0;i < 7;i++){
        cin >> temp;
        temperaturas[i] = temp;
    }
    maior = temperaturas[0];
    menor = temperaturas[0];
    for(int i = 0;i < 7;i++){
        if(temperaturas[i] > maior)
            maior = temperaturas[i];
        else if(temperaturas[i] < menor)
            menor = temperaturas[i];
    }
    for(int i = 0;i < 7;i++){
        if(temperaturas[i] < media(temperaturas, 7)){
            abaixo_da_media++;
        }
    }
    cout << media(temperaturas, 7) << endl;
    cout << abaixo_da_media << endl;
    cout << maior << " " << menor << endl;

    return 0;
}