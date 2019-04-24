#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
int main(){
	vector<string>malas_palabras;
	vector<string>palabras;
	string temp;
	malas_palabras.push_back("SHIT");
	malas_palabras.push_back("carajo");
	malas_palabras.push_back("puta");
	malas_palabras.push_back("cago");
	malas_palabras.push_back("zorra");
	malas_palabras.push_back("idiota");
	
	cout<<"Ingrese las palabras"<<endl;
	while (cin>>temp){
		palabras.push_back(temp);
	}
	for(int i=0;i<palabras.size();i++){
		for(int j=0; j<malas_palabras.size();j++){
			if(palabras[i]==malas_palabras[j]){
				palabras[i]="piiii";
			}
		}
	    cout<<palabras[i]<<" ";	
	}
}
