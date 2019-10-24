#include <iostream>
using namespace std;

struct libro{
    int n;
    libro *sig;
};

void peek(libro *X);
void pop(int n, int contador, libro *X);

int main(){
    libro *PInicio = NULL;
    libro *Paux = NULL;
    int contador = 0;
    int n = 0;
	
	do{
    	int opcion;	
	cout << "1. Agreagar Elemento." << endl;
	cout << "2. Ver elementos." << endl;
	cout << "3. Eliminar elemento." << endl;
	cout << "4. Salir." << endl;
	cout << "\tOpcion : "; 
	cin >> opcion; cout << endl << endl;
		
        if(opcion == 4){
        break;
	}
		
        if(opcion == 1){
    		Paux = new libro;
            cout << "Valor: " << endl;
            cin >> Paux -> n;
			if(PInicio == NULL){
		        PInicio = Paux;
                Paux -> sig = NULL;
            }else{
                Paux -> sig = PInicio;
                PInicio = Paux;
              	}
        }	
            else if(opcion == 2){            
			    cout << endl;
				peek(PInicio);
            }
            
            else if(opcion == 3){
            	cout << "Borrar el elemento ""n""" << endl;
                cout << "n = ";
                cin >> n;
                pop(n, contador, PInicio);
               
			}
			
            cout << endl << "	" << endl << endl; 
        }while(0<10);
    return 0;
}


void peek(libro *X){
	if(!X){
		return;
    }
	cout << "Elemento = " << X -> n << endl;
        peek(X -> sig);
}

void pop(int n, int contador, libro *X){
    if(!X){
        return;
    }
    if(X -> sig != NULL ){
        if(n == X -> sig -> n){
            X -> sig = X -> sig -> sig;
        }
    }
    pop(n, contador+1, X -> sig);
}
