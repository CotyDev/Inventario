#ifndef Lista_precios
#include <iostream>
#include <string.h>
#define Lista_precios
#include "access.h"
#define ulista C:\Users\ARTURO\Desktop\Inventario\Inventario\BD\Lista de precios //poner ruta que se requiera cuando se descargue

using namespace std;
//NOTA: falta agregar los parametros para completar las funciones que estaran en el main

class lista_precios{
	
	public:
	char list_id[5];
	char list_desc[20];
	int list_moneda;

	int i_lista_precios(){
		string lista = (string)this->list_desc + "\t"+ (string)this->list_id "\t" + (string)this->list_moneda;
		
		
	}
	
};


 


  
  
#endif
