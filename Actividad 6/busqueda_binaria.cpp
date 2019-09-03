#include <iostream>
using namespace std;
int arreglo[8] = {1,3,4,5,17,18,31,33};

int bin(int low, int high, int n){
	if(low > high){
		return (-1);
	}
	
	int mid=(low+high)/2;
	
	if(n==arreglo[mid]){
	return mid;
	}
	
	if(n < arreglo[mid]){
		return bin(arreglo[low], arreglo[mid-1], n);
	}
	
	if(n>arreglo[mid]){
		return bin(arreglo[mid+1],arreglo[high], n);
		}
	
}

int main (){
	
	int low=0;
	int high=7;
	int n=0;
	
	cout << "numero:";	cin >> n;
	int y = bin(low, high, n);
	cout << "casilla: " << y;
}
