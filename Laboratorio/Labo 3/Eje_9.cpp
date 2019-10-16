#include <iostream>
#include <string>
using namespace std;

struct Tpersona{
	string nombre;
	int edad;
	string correo;
	int carnet;
	int num_tel;
};
typedef struct Tpersona Persona;

Persona solicitarPersona(){
    Persona p;
    cout << "Nombre: "; getline(cin, p.nombre);
    getline(cin, p.correo);
    cout << "Edad: "; cin >> p.edad;
    cout << "Correo: "; getline(cin, p.correo);
	getline(cin, p.correo);
    cout << "Carnet: "; cin >> p.carnet;
    cout << "Numero de telefono: "; cin >> p.num_tel;
    getline(cin, p.correo);
	return p;
}

void mostrarPersona(Persona p){
	cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Correo: " << p.correo << endl;
    cout << "Carnet: " << p.carnet << endl;
    cout << "Numero de telefono: " << endl;
    cout << endl;
}

struct TNodo{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarFinal(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarPersona(){
    Persona p = solicitarPersona();
	insertarFinal(p);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarPersona(s->dato);
        s = s->sig;
    }
}

void eliminarPersona(){
    int unCarnet = 0;
    cout << "Carnet de la persona a eliminar: ";
    cin >> unCarnet;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "La persona a eliminar no existe!" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Persona eliminada!" << endl;
}

int main(){
	cout << "Inicializando..." << endl;
    pInicio = NULL;
    bool continuar=true;
    
    do{
		int opcion=0;
		cout<< "Menu: \n\t1) LLenar Lista\n\t2) Eliminar Persona"
	        << "\n\t3) Mostrar\n\t4) Salir"
	        << "\n\opcion: ";
	    cin >> opcion;
	    
	    switch (opcion){
	    	case 1: cout << "Llenar persona: " << endl;
	    		agregarPersona();
	    	break;
	    	case 2: cout << "Eliminando.. " << endl;
	    		eliminarPersona();
	    	break;
	    	case 3: cout << "Mostrando... " << endl;
	    		mostrarLista();
	    	break;
	    	case 4: continuar = false;
            break;
			default: cout << "Opcion erronea!" << endl;
            break;
		}
	}while(continuar);

	return 0;
}
