#include <iostream>
#include <string.h>
#include "access.h"

#ifndef Lista_precios
#define Lista_precios

const string ulista_precios = "BD/articulo.txt";

using namespace std;


class data_lista_precios{
	
	public:
	string list_id;
	string list_desc;
	int list_moneda;
	
	public:
		
		data_lista_precios(string list_id,
	string list_desc,
	int list_moneda){
		
		this->list_id = list_id;
		this->list_desc = list_desc;
		this->list_moneda = list_moneda;
		
		
	}
	
	
	

	int i_lista_precios(){
		
		string registro = this->list_desc + "\t"+ this->list_id + "\t" + this->list_moneda + "\n";
		
		insert(ulista_precios,registro);
		
	}
	
};


 


  
  
#endif
