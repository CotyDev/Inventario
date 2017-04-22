#include "lista_precios.h"

#ifndef V_LISTA_PRECIOS_H
#define V_LISTA_PRECIOS_H

using namespace std;

class v_lista_precios{
	
	public:
		
	string list_id;
	string list_desc;
	string list_moneda;
	
	v_lista_precios(){}
	
	int i_lista_precios(){
		
			do 
			{
				cout << "Codigo: ";
				cin >> this->list_id;
				
				if(this->list_id.length() != 5) {cerr << "ERROR: La longitud del codigo debe ser igual a 5 \n";}
				
			}while(this->list_id.length() != 5);
			
			
			do{
				cout << "Descripcion:";
				cin >> this->list_desc;
				if (this->list_desc.length() > 20) {cerr << "ERROR: La descripcion debe tener una longitud menor o igual a 20";}
			}while(this->list_desc.length() > 20);
		
		do{
				cout << "Moneda:";
				cin >> this->list_moneda;
				if (this->list_moneda() > 20) {cerr << "ERROR: el tipo de moneda debe tener una longitud menor o igual a 20";}
			}while(this->list_moneda() > 20);
		
		
	}
	
	
		string s_lista_precio()
	{
			string id;
		cout << "Ingrese el codigo: ";
		cin >> id;
		string s;
		s = select(ulista_precios,id);
		return s;
	}
	
	
	
	
	
	
	
};

#endif
