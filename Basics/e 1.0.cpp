#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
  char moneda;
  float y,e,l,t,c;
  y=0.009;
  e=1.12;
  l=1.30;
  cout<< "Ingrese si es Yenes (y), Euros (e) o Libras (l): \n";
  cin>>moneda;
  cout<< "Ingrese la cantidad: \n";
  cin>>c;
  if (moneda=='y')
    t=c*y;
  else if (moneda=='e')
    t=c*e;
  else if (moneda=='l')
    t=c*l;
  cout<<t<< endl;
}
