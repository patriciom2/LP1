#include<iostream>
using namespace std;

int area(int length,int width){
	return length*width;
}

const int frame_width=2;
//Calcula el area dentro de un marco
int framed_area(int x,int y){
	return area(x-frame_width,y-frame_width);
}

int main()
try
{
	int x=1;
	int y=2;
  	int z=1;
	{
		if(x<=0) throw runtime_error("x es negativo");
		if(x<=0) throw runtime_error("x es negativo");
		int area1=area(x,y);
	}
	{
		if(x<=0||y<=0)throw
			runtime_error("Argumento no posivo");
		int area1=area(x,y);
		if(z<=2) throw
			runtime_error("Argumento no positivo");
		int area2=framed_area(1,z);
		if(y<=2||z<=2) throw
			runtime_error("Argumento no positivo");
		int area3=framed_area(y,z);
		double ratio=double(area1)/area3; //convierte a double
	}
	{
		if(1-frame_width<=0||z-frame_width<=0) 
			throw runtime_error("Argumento negativo");
		int area2= framed_area(1,z);
		if (y-frame_width<=0||z-frame_width<=0)
			throw runtime_error("Argumento negativo");
		int area3=framed_area(y,z);
	}
}
catch (exception&e){
	cerr<<"Error: "<<e.what()<<endl;
	return 1;
}
