#include <iostream>
#include <string>

using namespace std;
int main()
{
	int c=0;
	int p=0;
	int z = 1;
	int contador = 0;
	int cambio = 0;
	cout<<"Ingrese la cantidad de jugadores \n";
	cin>>c;
	for (int x=1;x <= c;x++){
		cout<<"Ingrese el numero: \n";
		cin>>p;
		if (x > 1){
			if (p != z){
				if (cambio == 0){
					contador = contador + 2;
					cambio = 1;
				} else {
					contador = contador +1;
				}
			} else {
				cambio = 0;
			}
		} 
		z = p;
	}
	cout<<"Sospechosos: "<<contador<<endl;
}


 
