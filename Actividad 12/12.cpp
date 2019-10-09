#include <iostream>
#include <vector>
using namespace std;

struct UnaOrden{
    string cliente;
    int FrijolConQueso;
    int Queso;
    int revuelta;
    bool arroz;
};
typedef struct UnaOrden Orden;

Orden solicitarOrden(){
    Orden p;
    cout << "cliente: "; cin >> p.cliente;
    cout << "Frijol Con Queso: "; cin >> p.FrijolConQueso;
    cout << "Queso: "; cin >> p.Queso;
    cout << "Revuelta: "; cin >> p.revuelta;
    return p;
}

void mostrarOrden(Orden p){
    cout << "cliente: " << p.cliente << endl;
    cout << "Frijol Con Queso: " << p.FrijolConQueso << endl;
    cout << "Queso: " << p.Queso << endl;
    cout << "Revuelta: " << p.revuelta << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
