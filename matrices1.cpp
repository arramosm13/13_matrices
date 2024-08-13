#include <iostream>
using namespace std;

int main(){
	int n, suma=0;
	cout<<"Ingrese el tamaño de la matriz: "; cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"Ingrese el valor de ["<<i+1<<"] ["<<j+1<<"]."<<endl;
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		if (i<j){
			suma=suma+a[i][j];
		}
		}
	}
	cout<<"La sumatoria es: "<<suma<<endl;
	return 0;
}

