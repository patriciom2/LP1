#include<iostream>
using namespace std;

int area(int length,int width);
int main(){
	/*int x4=area(10,-7)   error, ancho -7?
	int x5=area(10.7,9.3)   error, solo llama 10 y 9
	char x2=area(100,9999)   error, trunca el resultado*/
	return area(4,4);
}

int area(int length,int width){
	return length*width;
}
