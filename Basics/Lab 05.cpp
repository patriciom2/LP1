#include <iostream>

using namespace std;
int main(){
	const double cm_per_inch=2.54;
	int length=1;
	char unit='a';
	cout<<"Por favor ingrese una longitud y su unidad (c o i)"<<endl;
	cin>>length>>unit;
	
	switch (unit){
		case 'i':
			cout<<length<<"in = "<<cm_per_inch*length<<"cm\n";
			break;
		case 'c':
			cout<<length<<"cm = "<<cm_per_inch/length<<"in\n";
			break;
		default:
			cout<<"Lo siento, no conosco la unidad '"<<unit<<" '"<<endl;
			break;
	}
}

