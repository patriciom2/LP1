#include <Iostream>

using namespace std;
int square (int);

int main (){
	int n = 0;
	cout<<"Ingrese un valor \n";
	cin>>n;
	int z=square(n);
	cout<<z<<endl;
} 

int square (int n){
	int z = 0;
	for (int x=1;x<=n;++x){
		z=z+n;
	}
	return z;
}
