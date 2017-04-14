#include <iostream>
#include <string>
#include <sstream>
#include "access.h"

#ifndef ARTICULO_H
#define ARTICULO_H

const string uarticulo = "BD/articulo.txt";

using namespace std;


class data_articulo 
{
	public:
		string art_id;
		string art_desc;
		string uni_id;
		string cat_id; //
		string prov_id; //ID del proveedor que suministra este articulo
		string art_fecha_creacion; //CAMBIAR EL TIPO DE DATOS A UNO PARA MANEJO DE FECHAS... (BUSCAR LA LIB EN INTERNET)
		double art_precio_adq;  // precio de adquisiscion
		double art_precio_ven; // precio de venta
		double art_porc_sup; // porcentaje superior
		double art_porc_inf; // porcentaje inferior
   	public:
		

		data_articulo
		(
			string art_id,
			string art_desc,
			string uni_id,
			string cat_id, //
			string prov_id, //ID del proveedor que suministra este articulo
			string art_fecha_creacion, //CAMBIAR EL TIPO DE DATOS A UNO PARA MANEJO DE FECHAS... (BUSCAR LA LIB EN INTERNET)
			double art_precio_adq,  
			double art_precio_ven,
			double art_porc_sup, 
			double art_porc_inf 
		)
		{
			//Inicializando las variables de la clase...
			this->art_id = art_id;
			this->art_desc = art_desc;
			this->uni_id = uni_id;
			this->cat_id = cat_id;
			this->prov_id = prov_id;
			this->art_fecha_creacion = art_fecha_creacion;
			this->art_precio_adq = art_precio_adq;
			this->art_precio_ven = art_precio_ven;
			this->art_porc_inf = art_porc_inf;
			this->art_porc_sup = art_porc_sup;
		}
		
		
		int i_articulo() 
			{
				//COMENTAR
				//Crea una cadena con los datos organizados. 
				
				stringstream numeros;
				string nums[4];
				 
				numeros << this->art_precio_adq;
				numeros >> nums[0];
				numeros.clear();
				
				numeros << this->art_precio_ven;
				numeros >> nums[1];
				numeros.clear();
				
				numeros << this->art_porc_inf;
				numeros >> nums[2];
				numeros.clear();
				
				numeros << this->art_porc_sup;
				numeros >> nums[3];
				numeros.clear();
				
				string registro = this->art_id + "\t" + this->art_desc + "\t" + this->uni_id + "\t" + this->cat_id + 
				"\t" + this->prov_id +"\t"+this->art_fecha_creacion +"\t"+ nums[0] +"\t"+ nums[1] +"\t"+ nums[2] +"\t"+ nums[3] + "\n";
				
				insert(uarticulo,registro);
			}
};	
	

#endif
