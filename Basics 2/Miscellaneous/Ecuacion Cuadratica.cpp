#include <iostream>
#include <cmath>

using namespace std;
float discriminante(float a, float b, float c){
	float z;
	z= b*b - 4*a*c;
	return z;
}


int main (){
	float a;
	float b;
	float c;
	float final1;
	float final2;

	cout<<"Ingrese valor de A ";
	cin>>a;
	while (a<1){
		cout<<"Ingrese un valor mayor a 0 ";
		cin>>a;
	}
	cout<<"Ingrese valor de B ";
	cin>>b;
	cout<<"Ingrese valor de C ";
	cin>>c;
	
	float disc = discriminante(a,b,c);
	
	if (disc < 0){
		cout << "Tiene raices complejas:"<<endl;
		final1 = -b/(2*a); //real
		final2 = sqrt(-disc)/(2*a); //imaginaria
	}
	
	if (disc == 0){
		cout << "Solo tiene una respuesta:"<<endl;
		final1 = -b/(2*a);
		final2 = 0;
	}
	
	if (disc >0){
		final1 = (-b + sqrt(disc))/(2*a);
		final2 = (-b - sqrt(disc))/(2*a);
	}
	
	cout<<"Discriminante: "<<disc<<endl;
	cout<<"Resultado 1: "<<final1<<endl;
	cout<<"Resultado 2: "<<final2<<endl;
}
