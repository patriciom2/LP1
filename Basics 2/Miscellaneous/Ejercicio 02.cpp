#include<iostream>
#include<vector>
#include<stdlib.h>
#include<stdexcept>

using namespace std;

int main(){
	int monto;
	int c=0,l=0,xx=0,x=0,v=0,i=0;
	cout<<"Ingrese el monto"<<endl;
	cin>>monto;
	
	while(monto>=100){
		try{
			monto=monto-100;
		    c++;
		}
	}
	while(monto>=50){
		monto=monto-50;
		l++;
	}
	while(monto>=20){
		monto=monto-20;
		xx++;
	}
	while(monto>=10){
		monto=monto-10;
		x++;
	}
	while(monto>=5){
		monto=monto-5;
		v++;
	}
	while(monto>=1){
		monto=monto-1;
		i++;
	}
	
	cout<<c<<" billetes de 100, "<<endl<<l<<" billetes de 50, "<<endl<<xx<<" billetes de 20, "<<endl
	<<x<<" billetes de 10, "<<endl<<v<<" monedas de 5, "<<endl<<i<<" monedas de 1, "<<endl;
}
