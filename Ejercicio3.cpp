#include <iostream>
#include <vector>
#include <string>
using namespace std;
void CargarVector(vector<int>& v){
	vector<int>MiVector(5);
	v.resize(5);
	for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero de un vector: ";
        cin >> v[i];
    }
    
}
void sumarVectores(vector<int>& v1, vector<int>& v2, vector<int>& v3) {
    v3.resize(5);
    for (int i = 0; i < 5; i++) {
        v3[i] = v1[i] + v2[i];
    }
}
void MostrarVector(const vector<int>& v){
	
	for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
}
int main(){
vector<int>Vector1;	
vector<int>Vector2;	
vector<int>Vector3;	
	CargarVector(Vector1);
	CargarVector(Vector2);
		sumarVectores(Vector1, Vector2, Vector3);
		MostrarVector(Vector1);
		MostrarVector(Vector2);
		MostrarVector(Vector3);
	return 0;
}
