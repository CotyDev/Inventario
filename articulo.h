#include "access.h"
#include <sstream>

#ifndef ARTICULO_H
#define ARTICULO_H

const string uarticulo = "BD/articulo.txt"; //constante con la ruta del archivo articulo.txt...
const string uaarticulo = "BD/aarticulo.txt"; //Constante con la ruta del archivo auxiliar de articulo.txt...
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
		string plan_id;
		double cont_sistema;
		double cont_fisico;
		double cont_diferencia;
   	public:
		

		data_articulo
		(
			string art_id,
			string art_desc,
			string uni_id,
			string cat_id, 
			string prov_id, 
			string art_fecha_creacion,
			double art_precio_adq,  
			double art_precio_ven,
			double art_porc_sup, 
			double art_porc_inf,
			string plan_id,
			double cont_sistema
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
			this->plan_id = plan_id;
			this->cont_sistema = cont_sistema;
		}
		
		data_articulo() {}
		
		
		int i_articulo() 
			{
				
				
				
				stringstream numeros; //Canal de string para almacenar los valores tipo numericos
				string nums[5]; //arreglo de string para recibir los valores tipos numericos a traves del canal convertidos a string. 
				 
				numeros << "\t"<< this->art_precio_adq; //enviar al canal el valor de precio_adq
				numeros >> nums[0]; //Llenar la variable en la primera posicion con precio_adq...
				numeros.clear(); //limpiar el canal
				
				numeros << this->art_precio_ven; //enviar precio_ven
				numeros >> nums[1]; //Llenar con precio_ven
				numeros.clear(); //Limpiar el canal
				 
				numeros << this->art_porc_inf; //Enviar porc_inf
				numeros >> nums[2]; //llenar con porc_inf
				numeros.clear();
				
				numeros << this->art_porc_sup; //Envia porc_sup
				numeros >> nums[3]; //Llenar con porc_sup
				numeros.clear();
				
				numeros << this->cont_sistema; //Envia conteo del sistema...
				numeros >> nums[4]; //Llenar con conteo del sistema...
				numeros.clear();
	
				
				//Crea una cadena con los datos organizados para ser guardados en el archivo...
				
				string registro = this->art_id + "\t" + this->art_desc + "\t" + this->uni_id + "\t" + this->cat_id + 
				"\t" + this->prov_id +"\t"+ this->plan_id + "\t" + this->art_fecha_creacion + "\t"  + nums[0] +"\t"+ 
				nums[1] +"\t"+ nums[2] +"\t"+ nums[3] + "\t" + nums[4] + "\t" + "\n"  ;
				
				//inserta los registros en el archivo de articulo.txt
				insert(uarticulo,registro); //	'uarticulo' almacena un string con la ruta del archivo.
			}
			/*
				@resumen busca el registro que corresponde al id del articulo inicializado.
				@param no acepta parametros
				
				@return retorna un string de una sola linea que contiene los datos de todos los campos separados por tabs
				@nota los datos se entregan totalmente planos para que sean manipulados despues...
				el id del articulo es publico por tanto para consultar un articula a traves de esta funcion, solo hay que cambiar el id. 
				
			*/
			
			string s_articulo() 
			{
				string s; //string que se piensa retornar
				s  = select(uarticulo, this->art_id); //se utiliza la funcion de access.h select para buscar el registro.
				 
				
				return s; //se retorna el registro...
			}
};	
	

#endif
