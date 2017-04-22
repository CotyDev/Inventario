#include <string.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "access.h"

#ifndef CONTEO_FISICO
#define CONTEO_FISICO

//agregar funcion que retorne arreglo de la descripcion

const string uconteo_fisico = "BD/conteo_fisico.txt";

using namespace std;


class data_conteo_fisico{
	
    public:
	                
	string con_id;			
	string con_fecha;
	string con_total_bruto;
	string con_valor;
	
	
	public:
	
	 data_conteo_fisico (string con_id,			
	string con_fecha,
	string con_total_bruto,
	string con_valor)
{


	this->con_fecha = con_fecha;
	this->con_id = con_id;
	this->con_total_bruto = con_total_bruto;
	this->con_valor = con_valor;
		
		
 }
 
 int i_conteo_fisico(){
 	
 	string registro = this->con_fecha + "\t" + this->con_id + "\t" + this->con_total_bruto + "\t" + this->con_valor + 
			"\n";
 	
 	insert(uconteo_fisico,registro);
 	
 }
 
 
 string s_conteo_fisico()
		{
			string s;
			s = select(uconteo_fisico,this->con_id);
		}


	
	
	
	
};

#endif


