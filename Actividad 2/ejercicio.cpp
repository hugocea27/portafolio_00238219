#include <iostream>
using namespace std;

int main(){
	int n=8;
	float numeros[] = {2,5,12,20,21,22,45,46};

	for(int i=0; i<8; i++){
		cout << "Arreglo " << "[" << i << "]" << "=" << numeros[i] << endl;
	}

	cout << "La mediana de este grupo es: " <<  endl;
	cout << (numeros[n]/2 + numeros[n]/2)/2;
}




