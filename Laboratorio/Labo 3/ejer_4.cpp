#include <iostream>
using namespace std;

struct numeros{
    int numero;
    numeros *sig;
};

void opciones(){
	cout<< "Opciones: " << endl;
	cout<<"	1) Ingresar elemento"<<endl;
    cout<<"	2) Mostrar Lista"<<endl;
    cout<<"	3) Mostrar sumas"<<endl;
    cout<<"	0.Salir"<<endl;
    cout<<"	Digite la opcion:";
}

void mostrarElementos(int n,numeros *PInicio){
    if(PInicio==NULL){
        return;
    }
    else{
        cout<<"Numero "<<n<<":"<<PInicio->numero<<endl;
        return mostrarElementos(++n,PInicio->sig);
    }
}

void mostrarSuma(int *n,int *x,numeros *PInicio){
    if(PInicio==NULL){
        return;
    }
    else if(PInicio->numero%2==0){
        *n+=PInicio->numero;
        return mostrarSuma(n,x,PInicio->sig);
    }
    else{
        *x+=PInicio->numero;
        return mostrarSuma(n,x,PInicio->sig);
    }
}



int main(void){
    numeros *PInicio=NULL;
    numeros *nuevo=NULL;
    numeros *aux=NULL;
    int a=0,b=0,c=0,d=0;
    do{
        opciones();
        cin>>a;
        if(a==0){
        }
        else if(a==1){
            b++;
            nuevo=new numeros;
            cout<<"Numero a agregar a la lista:";
            cin>>nuevo->numero;
            nuevo->sig=NULL;
            if(PInicio==NULL){
                PInicio=nuevo;
            }
            else{
                aux=PInicio;
                while(aux->sig!=NULL){
                    aux=aux->sig;
                }
                aux->sig=nuevo;
            }
        }
        else if(a==2){
            mostrarElementos(1,PInicio);
        }
        else if(a==3){
            mostrarSuma(&c,&d,PInicio);
            cout<<"Suma de los elementos pares: "<<c<<endl<<"Suma de los elementos impares: "<<d<<endl;
            c=0;
            d=0;
        }
        else{
            cout<<"Opcion invalida"<<endl;
        }
    }while(a!=0);
    return 0;
}


