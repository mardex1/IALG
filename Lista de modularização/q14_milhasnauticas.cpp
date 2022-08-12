#include <iostream>
#include <iomanip>
using namespace std;

float milhas (float quilometros){
    return quilometros * 0.54;
}

float previsao (float distancia, float v, float t){ 
    return milhas(v*t) + milhas(distancia);
}



int main (){
    float d, v, t;

    cout << fixed << setprecision(2);

    cin >> d >> v >> t;

    while(d >= 0){
        cout << milhas(d) << " ";
        cout << previsao(d,v,t) << endl;
        cin >> d >> v >> t;
    }

    return 0;
}