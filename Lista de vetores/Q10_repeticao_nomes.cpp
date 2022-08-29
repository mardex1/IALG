#include <iostream>
using namespace std;



int main (){
    string nomes;
    int quantidade;

    cin >> quantidade;

    for(int i = 0;i < quantidade;i++){
        getline(cin,nomes);
    }

    for(int i = 0;i < quantidade;i++){
        cout << nomes << " ";
    }cout << endl;

    return 0;
}