#include <iostream>

using namespace std;
int square (int x){
	if (x>8){
		x=8;
	}
	else if (x<1){
		x=1;
	}
	return x;
}
int main (){
	int f=0;
	int c=0;
	int m=0;
	cout<<"ingrese fila, columna y los movimientos por hacer \n";
	cin>>f>>c>>m;
	
	int b1=(f+m);
	b1=square(b1);
	int b2=(f-m);
	b2=square(b2);
	int a1=(c+m);
	a1=square(a1);
	int a2=(c-m);
	a2=square(a2);
	
	int base=(b1-b2+1);
	int altura=(a1-a2+1);
	
	cout<<base*altura;
}
