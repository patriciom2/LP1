#include<iostream>
using namespace std;

int area(int length,int width);
int main(){
	/*int s1=area(7;   error, falta valor de width
	int s1=area(7) error, falta el valor de width y punto y coma
	Int s3=area(7) error, Int con mayuscula
	int s4=area('7); error, imprime valor*/
	return area(4,4);
}

int area(int length,int width){
	return length*width;
}

