#include <iostream>
#include <vector>
#include <string>
using namespace std;
void CargarVector(vector<int>& v){
	vector<int>MiVector(5);
	
	for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero de un vector: ";
        cin >> MiVector[i];
    }
    
}
void MostrarVector(const vector<int>& v){
	
	for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
}
int main(){
	vector<int>MiVector;
	CargarVector(MiVector);
	MostrarVector(MiVector);
	return 0;
}
