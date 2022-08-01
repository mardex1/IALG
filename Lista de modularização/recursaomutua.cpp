#include <iostream>
using namespace std;

int f (int a);

int h (int a){
    if (a == 0){
        return 0;
    }else if (a > 0){
        return h(a-1) + f(a-1);
    }
}

int f (int a){
    if (a == 0){
        return 1;
    }else if(a > 0 and a % 2 == 0){
        return 2*h(a) + f(a-1);
    }else if(a < 0 and a % 2 != 0){
        return 2*h(a) - f(a-1);
    }
}

int main (){
    int x;

    cin >> x;

    cout << f(x) << endl;

    return 0;
}