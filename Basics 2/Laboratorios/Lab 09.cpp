#include<iostream>
using namespace std;
//Errores de lógica
int main(){
	double temp=0;
	double sum=0;
	double high_temp=0;
	double low_temp=0;
	int no_of_temps=0;
	
	while (cin>>temp){
		++no_of_temps;
		sum+= temp;
		//encuentra la mayor
		if (temp>high_temp)
			high_temp=temp;
		//encuentra la menor
		if (temp<low_temp)
			low_temp=temp;
	}
	cout<<" Temperaura alta: "<<high_temp<<endl;
	cout<<" Temperaura baja: "<<high_temp<<endl;
	cout<<" Temperaura promedio: "<<sum/no_of_temps<<endl;
	
	return 0;
}
