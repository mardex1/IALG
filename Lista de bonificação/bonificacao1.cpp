#include <iostream>
using namespace std;

int main (){
    int dia, hora, minuto, acrescimo, resultado, acrescimo_dia;

    cin >> dia >> hora >> minuto >> acrescimo;

    resultado = acrescimo / 60;
    if(resultado >= 24 - hora){
        hora = (resultado % 24) + hora;
        acrescimo_dia = resultado / 24;
        dia = dia + acrescimo_dia;
    }else{
        hora = resultado + hora;
    }

    minuto = acrescimo % 60 + minuto;

    if(minuto >= 60){
        hora = minuto/60 + hora;
        minuto = minuto%60;
    }

    if(hora >= 24){
        dia = hora/24 + dia;
        hora = hora%24;
    }


    cout << dia << " " << hora << " " << minuto << endl;

    return 0;
}