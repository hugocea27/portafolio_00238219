#include <iostream>
using namespace std;

int main (){
    int sumatoria=0;
    int arreglo[9]={};
    
    for(int i=0; i<10; i++){
        cout << "Ingrese un entero" << endl;
        cin >> arreglo[i];
    }
    
    for(int i=0; i<10; i++){
        sumatoria += arreglo[i];    
    }
    
    float promedio=sumatoria/10;
    
    cout << "Suma: " << sumatoria << endl;
    cout << "promedio: " << promedio << endl;
}

