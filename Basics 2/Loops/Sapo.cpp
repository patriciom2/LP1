#include<iostream>
using namespace std;

int main(){
	int cont=0;
    int a;
    int x;
    int s;
	int saltos[a]; 
    int z=1; 
    int mt=0; 	
    cout << "Ingrese la cantidad de saltos que dara el sapo"<<endl;
	cin>>x;//la cantidad de saltos
	if (x>=2)
  {
		for (int y=0; y<x; y++)
    {
		cout <<z<< " Salto"<<endl;//preguntara las veces de los saltos
		z++;//se incrementara el enunciado 
		cin>>saltos[y];//almacenamiento 
	}
	cout <<" Ingrese la cantidad de metros"<<endl;
	cin>>mt;//variable metros 
	for (s=0; s<x; s++)
  {
		if (saltos[s] < mt)
		{
		cont++;
		}
	}
	cout << "La cantidad de saltos son: "<< cont<<endl;
	}
	else{
		cout << "Ingreso un dato equivocado"<<endl;//no puede ser menor a 2 si no la respuesta seria uno y su respuesta de mtrs seria relevante 
	}

}
