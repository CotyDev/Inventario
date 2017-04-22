 #include "access.h"
#include <iostream>
#include <string>
#include <sstream>

#ifndef CONTEO_DETALLE_H
#define CONTEO_DETALLE_H
const string uconteo_detalle = "BD/conteo_detalle.txt";

using namespace std;


class data_conteo_detalle
{
	string art_id;
	string cont_id;
	double cont_cantidad_fisica;
	double cont_cantidad_sistema;
	double cont_diferencia;
	
	public:
		data_conteo_detalle 
		(
			string art_id,
			string cont_id,
			double cont_cantidad_fisica,
			double cont_cantidad_sistema,
			double cont_diferencia
		)
		
		{
			this ->art_id = art_id;
			this->cont_id = cont_id;
			this->cont_cantidad_fisica = cont_cantidad_fisica;
			this->cont_cantidad_sistema = cont_cantidad_sistema;
			this->cont_diferencia = cont_diferencia;	
		
		}
		int  i_conteo_detalle ()
		{
			stringstream numeros;
			string nums[3];
			numeros >> nums[3];
			numeros.clear();
			
			numeros << "\t"<< this->cont_cantidad_fisica; 
				numeros >> nums[0]; 
				numeros.clear(); 
				
				numeros << this->cont_cantidad_sistema; 
				numeros >> nums[1]; 
				numeros.clear(); 
				 
				numeros << this->cont_diferencia; 
				numeros >> nums[2]; 
				numeros.clear();
				
				string registro = this->art_id + "\t" + this->cont_id + "\t" + nums[0] + "\t" + nums[1] + "\t" + nums[2] + "\n";
				insert(uconteo_detalle,registro);
		}
		string s_conteo_detalle()
		{
			string s;
			s = select(uconteo_detalle,this->cont_id);
		}
};






#endif
