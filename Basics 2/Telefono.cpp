#include <iostream>
#include <string>

using namespace std;
int main()
{
	int c;
	int p;
	int z = 1;
	int contador = 0;
	int cambio = 0;
	int l;
	cin>>l;
	for (int y=0;y<l;y++){
		 cin>>c;
		 for (int x=0;x < c;x++){
				cin>>p;
				if (x >= 1){ //si es menor a uno se almacena en la variable z, si es mayor a uno pasa a el if 
					if (p != z){ //si la palabra nueva es diferente a la original ingresada pasa al siguiente if
						if (cambio == 0){ //si el cambio es 0 el se la añade 2 que es el anterior y ese 
							contador = contador + 2;
							cambio = 1; //se le suma 1 al cambio
						} else {
							contador = contador +1; //si es uno el cambio solo le suma uno
						}
					} else {
						cambio = 0;//si el siguiente numero es igual el cabio se rei
					}
				} 
				z = p;
		}
		cout<<"Sospechosos: "<<contador<<endl;
		contador = 0;
		cambio = 0;
	}
}
