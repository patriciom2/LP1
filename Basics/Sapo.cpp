#include<iostream>
using namespace std;

int main(){
	int cont=0;
  int a;
  int x;
  int s;
	int saltos[a]; 
  int z=1; 
  int patron=0;
  int mt=0; 	
  cout << "Ingrese la cantidad de saltos que dara el sapo"<<endl;
	cin>>x;
	if (x>=2)
  {
		for (int y=0; y<x; y++)
    {
		cout <<z<< " Salto"<<endl;
		z++;
		cin>>saltos[y];
	}
	cout <<" Ingrese la cantidad de metros"<<endl;
	cin>>mt;
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
		cout << "Ingreso equivocado"<<endl;
	}

}
