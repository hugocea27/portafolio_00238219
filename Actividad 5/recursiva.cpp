#include <iostream>
using namespace std;

int elevar(int x, int y){
	int n=0;
	if(y==1){
		n=x;
	}
	else{
		if(y>1){
		n=x*elevar(x,y-1);
		}
	}
	return n;
}

int main(){
	int num=0;
	int potencia=0;
	cout << "digite un numero: ";
	cin>>num;
	cout << "digite la potencia entera positiva: ";
	cin>>potencia;
	
	cout<<"resultado: "<< elevar(num, potencia);
}
