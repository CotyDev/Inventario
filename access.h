#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>

#ifndef ACCESS_H
#define ACCESS_H

using namespace std;

//FUNCION PARA INSERTAR LINEAS DE TEXTO EN UN ARCHIVO TXT.
/*
	Parametros -> filepath (Un string con la ruta del archivo en el cual se va a insertar_
			   -> data (String de la linea o registro que va a almacenarse en el archivo)
	Retorno -> 1 : Exito insertando!
			-> 0 : ocurrio un error insertado la data.  
 */
int insert(string filepath, string data) 
{
	try
	{
		ofstream file(filepath.c_str(), fstream::app);
		
		if (file.is_open()) 
		{
			file << data;
			file.close();
			
		}
		else {
			throw 0;
		}
		
		
		return 1;
	}
	catch (int e) 
	{
		if (e == 0) {
			cerr << "No se puedo abrir el archivo";
			return e;
		}
			
	}
}


#endif

