#include<iostream>
using namespace std;

struct Node{
	int dato;
	Node *anterior; 
	Node *siguiente;
	

	Node *Create(Node *x, int a){
	Node *nuevo_nodo = new Node;
	nuevo_nodo->dato=a;
	nuevo_nodo->anterior=NULL;
	nuevo_nodo->siguiente=NULL;
	x=nuevo_nodo;
	return x;
}

Node *Meter(Node *x, int a){
	Node *nuevo_nodo = new Node;
	nuevo_nodo->dato=a;
	nuevo_nodo->anterior=NULL;
	nuevo_nodo->siguiente=x;
	x->anterior=nuevo_nodo;
	x=nuevo_nodo;
	return x;
}

void mostrarInverso(Node *x){
	Node *aux=x;
	while(aux !=NULL){
	cout<< aux->dato<<endl; 
	aux=aux->siguiente;
}
}

void Mostrar(Node *x){
	Node *aux=x;
	while(aux->siguiente!=NULL){
		aux=aux->siguiente;
	}
	while(aux !=NULL){
	cout<<aux->dato<<endl; 
	aux=aux->anterior;}
	}
};

int main(){
    int a, b, c, d, e;
    cout<<"Ingrese 5 numeros: "<<endl;
    cin>>a>>b>>c>>d>>e;
	Node *x=NULL;
	Node *p;
	x=p->Create(x,a);
	x=p->Meter(x,b);
	x=p->Meter(x,c);
    x=p->Meter(x,d);
    x=p->Meter(x,e);
    cout<<"Normal:"<<endl;
	p->Mostrar(x);
	cout<<"Inverso"<<endl;
	p->mostrarInverso(x);
	
	return 0;
}
