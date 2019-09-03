#include <iostream>

using namespace std;

struct pais{
	char nombre;
	char capital;
	int habitantes;
}pais[25];

in main (){
	for (int i=0; i<5; i++){
		cout << "pais #" << i+1 << endl;
		cout << "Nombre: ";
		cin >> pais[i].nombre;
		cout << "Capital: ";
		cin >> pais[i].capital;
		cout << "Habitantes";
		cin >> pais[i].habitantes;
		cout << "	"<< endl;
		
		
	}

}
