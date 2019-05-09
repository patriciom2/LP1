#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

int main(){
	int monto;
	int cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	cout<<"Ingrese el monto: ";
	cin>>monto;
	
	while(monto>=100){
		monto=monto-100;
		cien++;
	}
	while(monto>=50){
		monto=monto-50;
		cincuenta++;
	}
	while(monto>=20){
		monto=monto-20;
		veinte++;
	}
	while(monto>=10){
		monto=monto-10;
		diez++;
	}
	while(monto>=5){
		monto=monto-5;
		cinco++;
	}
	while(monto>=1){
		monto=monto-1;
		uno++;
	}
	
	cout<<cien<<" billetes de 100, "<<endl;
	cout<<cincuenta<<" billetes de 50, "<<endl;
	cout<<veinte<<" billetes de 20, "<<endl;
	cout<<diez<<" billetes de 10, "<<endl;
	cout<<cinco<<" monedas de 5, "<<endl;
	cout<<uno<<" monedas de 1, "<<endl;
}
