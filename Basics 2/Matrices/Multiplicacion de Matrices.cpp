#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int k, m, n;

    cout<<"Filas de A (Max. 10): "; 
	cin>>k;
    cout<<"Columnas de A (Max. 10): "; 
	cin>>m;
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }

    cout<<"Las filas ya no son requeridas en esta matriz de lo contrario no podria resolverse"<<endl;
    cout<<"Columnas de B (Max. 10) : "; 
	cin>>n;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C[i][j] = 0;

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C[i][j] += A[i][z] * B[z][j];

    
    cout<<"El Resultado es: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
