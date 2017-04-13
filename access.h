#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
int insert(char* filepath, string data ) 
{
	try
	{
		FILE* file = fopen(filepath,"a");
		
		fputs(data,file);
		
		fclose(file);
		return 1;
	}
	catch () 
	{
		return 0;	
	}
	
	
	
	

}


#endif

