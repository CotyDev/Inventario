#include <string.h>
#include <iostream>
#include <fstream>
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

/*
	@resumen abre un archivo para buscar una linea a traves de un valor encontrado en la primera columna...
	funciona con archivos que tienen la informacion separada con 4 espacios o tabs.
	
	@param filepath es un string que contiene la ruta completa del archivo que se va a leer.
	@param id es un string identificador que permite encontrar la linea que se busca dentro del archivo...
	@return retorna un string con la linea extraida del archivo...
	@nota esta funciona es una herramienta que facilita el acceso a los archivos de la base de datos. 
*/

string select(string filepath, string id) 
{
	ifstream file(filepath.c_str()); //Abriendo el archivo para lectura
	
	if (!file.is_open())
	{
		cerr << "Ha ocurrido un error abriendo el archivo!";
		return "Error";
	}
	char* s = (char*)malloc(sizeof(char)*128); //retenedor de informacion...
	string data; //string que va a almacenar la linea de salida. 
	
	while(file.good()) //corre mientras el canal tenga informacion...
	{
		file >> data;
		file.getline(s,128); //Salta a la siguiente linea...
		
		if (data == id) //pregunta si la linea actual contiene el id buscado....
		{	
			data = data + s; //concatena el id con el resto de la linea
			break; //sale del ciclo...
		}
		
		
	}
	free(s); //limpia la memoria del retenedor...
	file.close(); //cierra el archivo...
	
	return data; //retorna el string
}

#endif

