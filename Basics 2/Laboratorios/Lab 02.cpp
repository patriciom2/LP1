#include<iostream>
using namespace std;

int area(int length,int width);
int main(){
	/*int x0=arena(7)   error, la funcion arena no existe
	int x1=area(7)   error, numero de argumentos
	int x2=area("seven",2)   error en el tipo del primer argumento*/
	return area(4,4);
}

int area(int length,int width){
	return length*width;
}
