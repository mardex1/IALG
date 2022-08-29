#include <iostream>
using namespace std;

struct sorteio{
    int sequencia[6];
};

int registra(sorteio *vetor, int n){
    int somas[n];   
    int soma = 0;
    int k = 0;
    int maior;
    int posicao;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 6;j++){
            cin >> vetor[i].sequencia[j];
            soma = soma + vetor[i].sequencia[j];
            somas[k] = soma;
        }
        soma = 0;
        k++;
    }
    maior = somas[0];
    for(int h = 0;h < n;h++){
        if(somas[h] >= maior){
            maior = somas[h];
            posicao = h;
        }
    }

    return posicao;
}

/*void imprime(sorteio *vetor, int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 6;j++){
            cout << vetor[i].sequencia[j] << " ";
        }cout << endl;
    }
}*/

int main (){
    int n;
    int posicao;

    cin >> n;

    sorteio *vetor = new sorteio[n];

    posicao = registra(vetor, n);

    for(int i = 0;i < 6;i++){
        cout << vetor[posicao].sequencia[i] << " ";
    }cout << endl;

    return 0;
}