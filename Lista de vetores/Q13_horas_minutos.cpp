#include <iostream>
using namespace std;
//m < 60 e 60*h + m = mnts
void horasMinutos(int mnts,int *ptr1, int *ptr2){
    *ptr1 = mnts/60;
    *ptr2 = mnts%60;
}

int main (){
    int mnts;
    int h;
    int m;
    int *ptr1 = &h;
    int *ptr2 = &m;

    cin >> mnts;

    horasMinutos(mnts, ptr1, ptr2);

    cout << *ptr1 << endl << *ptr2 << endl;
    
    return 0;
}