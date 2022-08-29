#include <iostream>
using namespace std;

struct politico{
    string partido;
    string candidato;
};

struct operacoes{
    string operacao;
    string corrupto;
    int valor;
};

politico registra(politico vet[], int n){
    politico P;
    for(int i = 0;i < n;i++){
        cin >> vet[i].partido >> vet[i].candidato;
    }
    return P;   
}

operacoes registro(operacoes vet[], int N){
    operacoes O;
    for(int i = 0;i < N;i++){
        cin >> vet[i].operacao >> vet[i].corrupto >> vet[i].valor;
    }
    return O;
}

int busca(politico vetor[], int n, operacoes vet[], int N, string partido, string operacao){
    int soma = 0;
    for(int i = 0;i < N;i++){
        if(vet[i].operacao == operacao){
            for(int j = 0;j < n;j++){
                if(vetor[j].partido == partido){
                    if(vetor[j].candidato == vet[i].corrupto){
                        soma = soma + vet[i].valor;
                    }
                }
            }
                
        } 
    }
    return soma;
}

int main (){
    int n;

    cin >> n;

    politico vetor[n];

    registra(vetor, n);

    int N;

    cin >> N;

    operacoes vetor2[N];

    registro(vetor2, N);

    string partido;
    string operacao;

    cin >> partido >> operacao;

    cout << busca(vetor, n, vetor2, N, partido, operacao) << endl;

    return 0;   
}