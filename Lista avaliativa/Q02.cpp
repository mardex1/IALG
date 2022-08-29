#include <iostream>
using namespace std;

int main (){
    int horarios[100];
    int i = -1;
    int alunos;
    int posicao70;
    int hora_consulta;
    int minuto_consulta;
    float porcentagem;
    
    do{
        i++;
        cin >> horarios[i];
    }while(horarios[i] >= 0);

    alunos = i/2;

    posicao70 = 2*(alunos * 70/100);

    cin >> hora_consulta >> minuto_consulta;

    for(int j = 0;j < i;j++){
        if(horarios[j] == hora_consulta){
            if(horarios[j+2] > hora_consulta){
                porcentagem = (j+2)/(float)i;
            }else if((horarios[j+3] > minuto_consulta)and(horarios[j+1] <= minuto_consulta)){
                porcentagem = (j+2)/(float)i;
            }else if(horarios[1] > minuto_consulta){
                porcentagem = 0;
            }
        }else if(horarios[0] > hora_consulta){
            porcentagem = 0;
        }
    }
    cout << horarios[posicao70] << ":" << horarios[posicao70+1] << endl;

    cout << porcentagem*100 << endl;
    return 0;
}