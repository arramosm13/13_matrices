#include <iostream>
using namespace std;
const int max=100;
void leer(int n; int a[max][max]);
void suma(int n; int a[max][max]);

int main(){
	int n, sum;
	cout<<"Ingrese el tamaño de la matriz: "; cin>>n;
	leer (n; a[max][max]);
	sum = suma(n,a[max][max])<<endl
	cout<<"La sumatoria es: "<<sum<<endl;
	return 0;
}
void leer (int n; int a[max][max]){
	for(j=0; j<n; j++){
		for(i=0; i<n; i++){
			cout<<"Ingrese el valor de ["<<i+1<<"] ["<<j+1<<"]."<<endl;
			cin>>a[i][j];
		}
	}
}
int suma (int n; int a[max][max]){
	int suma=0;
	for (i=1; i=n){
		for (j=1; j=n){
			suma=suma+a[i][j]
			return suma;
		}
	}
}