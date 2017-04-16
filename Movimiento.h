#include <iostream>
#include <string>
#include <sstream>
#include "access.h"

#ifndef Movimiento
#define Movimiento

const string umovimiento = "BD/movimiento.txt" //ubicacion del archivo

using namespace std;

class data_movimiento{
	
	public:					//atributos de la clase movimiento
		
	string mov_id;
	string tmov_id;
	string art_id;	
	int mov_cantidad;	
	int mov_total;
	int mov_subtotal;
	int mov_descuento;
	int mov_fecha;	
	
	public:
		data_movimiento					//metodo constructor
		
	(string mov_id,
	string tmov_id,
	string art_id,	
	int mov_cantidad,	
	int mov_total,
	int mov_subtotal,
	int mov_descuento,
	int mov_fecha,)  {
		
		this->art_id = art_id;
		this->mov_cantidad = mov_cantidad;
		this->mov_descuento = mov_descuento;
		this->mov_fecha = mov_fecha;
		this->mov_id = mov_id;
		this->mov_subtotal = mov_subtotal;
		this->mov_total = mov_total;
		this->tmov_id = tmov_id;
		
			
	  }
	
	int i_movimiento(){
		
		stringstream numeros;
		string num[5];
		
		numeros << this->mov_cantidad;
		numeros >> num[0];
		numeros.clear();
		
		numeros << this->mov_descuento;
		numeros >> num[1];
		numeros.clear();
		
		numeros << this->mov_fecha;
		numeros >> num[2];
		numeros.clear();
		
		numeros << this->mov_subtotal;
		numeros >> num[3];
		numeros.clear();
		
		numeros << this.mov_total;
		numeros >> num[4];
		numeros.clear();
		
		string registro = this->art_id + "\t" + this->mov_id + "\t" + this.tmov_id +
		"\t" + num[0] + "\t" + num[1] + "\t" + num[2] + "\t" + num[3] + "\t" + num[4] + "\n";
		
		insert(umovimiento,registro);
		
	}
	
	
	
	
	
	
};


  
  
#endif
