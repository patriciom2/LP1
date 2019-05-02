#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
	int N;
    string R="NO";
	cin>>N; //cout<<"ingrese la longitud del lienso";
	int C;
	int l[N];
	if (N<3){
	    cout<<"ERROR"<<endl;
    }
   //cout<<"Ingrese colores con los cuales pintara";
   for(int i=0;i<N;i++){
    cin>>C;
	l[i]=C;
   }
   for(int i=0;i<N-2;i++){
    if(l[i+1]==l[i] && l[i+1]==l[i+2]){
      R="SI";
    }
   }
    if (R=="si"){
     cout<<(R);
    }
    else{
     cout<<(R);
    }
    }
} 
