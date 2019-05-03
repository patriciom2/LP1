#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

using namespace std;

bool revisaMatriz (int *mat, int numero){
	bool rpta = false;
	for (int contador = 0; contador < 4; contador++)
	{
		if (mat[contador] == numero)
		{
			rpta = true;
		}
	}
	return rpta;
}

bool revisaIngreso (int numero){
	bool rpta = false;
	if (numero < 1 || numero > 9 ) {
		cout << "Ingresa un mumero entre 1 y 9 !!!" << endl;
		rpta = true;
	}
	return rpta;
}

//Sirve para setear la matriz a ceros
void borrarMatriz (int *mat){
	for (int contador = 0; contador < 4; contador++)
	{
		mat[contador] = 0;
	}
}

int main(){
	int jugada[4] = {0,0,0,0};
	int jugador[4] = {0,0,0,0};
	int pc = 0;
	int hum = 0;
	int vacas = 0;
	int toros = 0;
	bool fin = false;
	int tmp = 0;
	bool finded = false;
	bool finded2 = false;
	int cantidad = 1;
	
	srand(time(NULL));
	
	//Generacion de numeros aleatorios
	
	for (int contador = 0 ; contador < 4 ; contador++)
    {
    	do {
    		tmp = (1 + rand() % 9); 
    		finded = revisaMatriz( jugada, tmp);
    		if (!finded){
    			jugada[contador] = tmp;	
				finded = false;	
			}
			else {
				finded = true;
			}
			
		} while (finded);
    }
    
    //Jugada Original
	for (int contador = 0 ; contador < 4 ; contador++)
	{
      cout << jugada[contador] << " - ";
    }
    cout << endl;
    
    do {
    	
    	//Ingreso de los numeros de la jugada
	    for (int contador = 0 ; contador < 4 ; contador++)
	    {
	    	do{
	    		//Revisar que el numero sea mayor a cero y menor a 10 -- Funcion revisaIngreso
	    		cout << "Ingresa el numero " << contador + 1 << " : ";
	    		cin >> tmp;
	    		if (!revisaIngreso(tmp)){
	    			finded = false;
				} else {
					finded = true;
				}
				
				//Revisar que el numero ingresado no este duplicado -- Funcion revisaMatriz
    			if (revisaMatriz( jugador, tmp)){
					cout << "El numero ya fue ingresado, escoge otro !!" << endl;
					finded2 = true;
				}
				else {
					finded2 = false;
				}
				
			} while (finded || finded2);
			jugador[contador]  = tmp;
	    }
	    
	    //Buscar Toros
	    for (pc = 0 ; pc < 4 ; pc ++ )
	    {
	    	for (hum = 0 ; hum < 4 ; hum ++ )
	    	{
	    		if (jugada[pc] == jugador [hum])
	    		{
	    			if (pc == hum)
	    			{
	    				toros++;
					} else
					{
						vacas++;
					}
				}
			}
		}
		
		// Mostrar Resultados
		
	    cout << " " << endl;
		cout << "Toros: " << toros << endl;
		cout << "Vacas: " << vacas << endl;	
		
		// Gano?
		
		if (toros == 4) {
			fin = true;
			cout << "GANASTE!!!!!"<<endl;
			cout << "Lo hiciste en "<< cantidad << " jugada(s)!!!"<<endl;
		}
		
		toros = 0;
		vacas = 0;
		tmp = 0;
		borrarMatriz (jugador);
		cantidad++;
		
	} while (!fin);
    return 0;
}


