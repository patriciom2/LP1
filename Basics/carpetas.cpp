#include <iostream>

using namespace std;
int main()
{
	char f,c;
	cout<<"Ingrese las filas";
	cin>>f;
	cout<<"Ingrese las columnas";
	cin>>c;
	if (f%2 == 0 && c%2 == 0) || (f%2 == 0 && c%2 > 0) || (f%2 > 0 && c%2 == 0){
	    cout<<"Si se puede"<<endl;
	break;
  }
	if (f%2 > 0 && c%2 > 0);{
	    cout<<"No se puede"<<endl;
	break;
  }
}
