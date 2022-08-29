#include <iostream>
using namespace std;

int fatorial(int n){
	int fator = 1, i = n;
	while(i > 1){
		fator = fator * i;
		i--;
	}
	return fator;
}

void obterVetor(float ptrvet[], int tam){
    for(int i = 0;i < tam;i++){
        ptrvet[i] = (2*fatorial(i) + i)/(i*i + 1.75);
    }
}

int main (){
    int N;
    int M;

    cin >> N;

    float *ptrvet = new float[N];

    obterVetor(ptrvet, N);

    cin >> M;

    for(int i = M;i < N;i++){
        cout << ptrvet[i] << endl;
    }

    return 0;
}