#include <iostream>

using namespace std;
int main(){
	const double cm_per_inch=2.54;
	int length=1;
	char unit;
	cout<<"Por favor ingrese una longitud seguida de su unidad (c o i)";
	cin>>length>>unit;
	if(unit=='i')
		cout<<length<<"in = "<<cm_per_inch*length<<"cm"<<endl;
	if (unit=='c')
		cout<<length<<"cm = "<<length/cm_per_inch<<"in"<<endl;
	else
		cout<<"Lo siento, no conozco una unidad llamada "<<unit<<endl;
}
