#include <iostream>
using namespace std;

long int fatorial(int a){
    long int fator = 1, i = a;
    while(i > 1){
        fator = fator * i;
        i--;
    }
    return fator;
}

long int combinacao (int n, int k){
    long int resultado;
    resultado = fatorial(n)/(fatorial(k)*fatorial(n-k));
    return resultado;
}

long int somatorio(int n){
    long int i = 1, soma = 0;
    while(i <= n){
        soma = soma + combinacao(n,i);
        i++;
    }
    return soma;
}
int main (){
    long int num;

    cin >> num;

    cout << somatorio(num) << endl;

    return 0;
}