#include <iostream>
using namespace std;

struct{
    int real;
    int imaginario;
    char signo;
}num;

int main (){
    cout << "ingrese parte real:"; cin >> num.real;
    cout << "ingrese signo del imaginario: "; cin >> num.signo;
    cout << "ingrese parte imaginaria: "; cin >> num.imaginario;
    cout << "Numero: " << num.real << num.signo << num.imaginario << "i" << endl;
    
    if(num.signo== '-'){
        num.signo='+';
        cout << "conjugada: " << num.real << num.signo << num.imaginario << "i" << endl;
    }
    
    else{
        num.signo='-';
        cout << "conjugada: " << num.real << num.signo << num.imaginario << "i" << endl;
    }
}
