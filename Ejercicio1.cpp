#include<iostream>
#include<string>
#include<vector>
using namespace std;
int calcularSumaVector() {
    vector<int> mivector(8);
    int suma = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el primer numero de un vector: ";
        cin >> mivector[i];
    }

    for (int i = 0; i < 8; i++) {
        suma += mivector[i];
    }

    return suma;
}
int main(){
	int resultado = calcularSumaVector();
	cout<<"El valor acumulado del vector: "<<resultado<<endl;
	
	
	return 0;
}
