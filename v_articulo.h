#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include "articulo.h"

#ifndef V_ARTICULO_H
#define V_ARTICULO_H 1

using namespace std;

class v_articulo 
{
	private:
		string art_id;
		string art_desc;
		string uni_id;
		string plan_id;
		string cat_id;
		string prov_id;
		string art_fecha_creacion;
		double art_precio_adq;
		double art_precio_ven;
		double art_porc_inf;
		double art_porc_sup;
		double cont_sistema;
	public:
	
	
	
	
		v_articulo() 
		{ 
		 /*nothing here...*/
		} //Constructor
	
	
		int i_articulo() 
		{
			
			
			do{
				cout << "Codigo:";
				cin >> this->art_id;
				if (this->art_id.length() != 5) {cerr << "ERROR: El codigo debe ser de 5 digitos.";}
			
			}while(this->art_id.length() != 5);
			
			do{
				cout << "Descripcion:";
				cin >> this->art_desc;
				if (this->art_desc.length() > 20) {cerr << "ERROR: La descripcion debe tener una longitud menor o igual a 20";}
			}while(this->art_desc.length() > 20);
			
						
			do 
			{
				cout << "Fecha de registro: ";
				cin >> this->art_fecha_creacion;
				if (this->art_fecha_creacion.length() != 10) { cerr <<"ERROR: La fecha debe tener longitud 10";}
			}while(this->art_fecha_creacion.length() != 10);
			

			/*
			do{
				
				cout <<"Selecciona una unidad...";
				/*
					@pendiente: se debe desplegar una lista de las opciones para seleccion de unidades...
				
				
				int  control = 0;
				int opc = 0;
				switch(opc)
				{
					case 1:
					
					case n:
						//code
					default:
						//code
				} 
			
			}while(control == 0); */
				
			
			
				
			cout << "Introduzca el precio de adquisicion: ";
			cin >> this->art_precio_adq;
			
			do {
				
				cout << "Introduzca el precio de venta: ";
				cin >> this->art_precio_ven;
				if (art_precio_ven < art_precio_adq) {cerr <<"ERROR: El Precio de venta no puede ser menor al precio de adquisicion";}
				
			} while(art_precio_ven < art_precio_adq); 
			
			do {
				
				cout << "Introduzca el porcentaje inferior: ";
				cin >> this->art_porc_inf;
				if (this->art_porc_inf > 0.10) {cerr <<"ERROR: El Porcentaje inferior debe ser menor al 10%";}
				
			} while(this->art_porc_inf > 0.10); 
			
			
			
			do {
				
				cout << "Introduzca el porcentaje superior: ";
				cin >> this->art_porc_sup;
				if (this->art_porc_sup > 0.15) {cerr <<"ERROR: El Porcentaje superior debe ser menor al 15%";}
				
			} while(this->art_porc_sup > 0.15); 
			
			
			do {
				cout << "Existencias: " << "\n";
				cin >> this->cont_sistema;
				if (this->cont_sistema <= 0) {cerr << "ERROR: debe ser mayor que 0";}
			}while(this->cont_sistema <= 0);
			
			data_articulo objarticulo
			(this->art_id,this->art_desc,this->uni_id,this->cat_id,this->prov_id,this->art_fecha_creacion,this->art_precio_adq, this->art_precio_ven,this->art_porc_inf,this->art_porc_sup,this->plan_id, this->cont_sistema);	
			objarticulo.i_articulo();
			return 1;
		}
		
	string s_articulo()
	{
		string id;
		cout << "Ingrese el codigo: ";
		cin >> id;
		string s; //string que se piensa retornar
		s  = select(uarticulo, id); //se utiliza la funcion de access.h select para buscar el registro.
		
		return s; //se retorna el registro...
		
	}	
		
		
};

#endif
