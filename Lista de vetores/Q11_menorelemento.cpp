#include <iostream>
using namespace std;

int menor(int vet[], int tam, int i){
    if(tam == 1){
        return vet[i];
    }else{
        if(vet[tam-1] < vet[i]){
            return menor(vet, tam-1, tam-1);
        }else{
            return menor(vet, tam - 1, i);
        }

    }
}

int main (){
    int n;

    cin >> n;

    int m;
    int vetor[n];

    for(int i = 0;i < n;i++){
        cin >> vetor[i];
    }

    m = menor(vetor, n, 0);

    cout << m << " ";

    for(int i = 0;i < n;i++){
        if(vetor[i] == m){
            cout << i << endl;
            i=n;
        }
    }

    return 0;
}