#include <iostream>
using namespace std;

int main (){
	int n;
	cout<<"Ingrese el tamaño de la matriz:", cin>> n;
	int A[n][n];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<"Ingrese en valor de ["<<i+1<<"] ["<<j+1<<"]:"<< endl; 
			cin>> A[i][j];
		}
	}
}
