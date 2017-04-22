#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include "Unidades.h"


#ifndef V_UNIDADES
#define V_UNDADES


using namespace std;
	

class v_unidades{
	
	private:
		
	string uni_id;
	string uni_descr;
	string uni_etiqueta;
	
	public:
		
		v_unidades()
		{
		
		}
		
		int i_unidades(){
			
			do{
				cout << "Codigo:";
				cin >> this->uni_id;
				if (this->uni_id.length() != 5) {cerr << "ERROR: El codigo debe ser de 5 digitos. \n";}
				if (select(uunidades,this->uni_id) != "Error") {cerr << "ERROR: Unidad ya existe. \n";}
				
			}while(this->uni_id.length() != 5 || select(uunidades,this->uni_id) != "Error");
					
					
					do{
				cout << "Descripcion:";
				cin >> this->uni_descr;
				if (this->uni_descr.length() > 20) {cerr << "ERROR: La descripcion debe tener una longitud menor o igual a 20 \n";}
			}while(this->uni_descr.length() > 20);
			
			
			
			
			
			
			
			data_unidades objunidades
			(this->uni_id,this->uni_descr, this->uni_etiqueta);
			objunidades.i_unidades();
			return 1;
			
		}
			
		
		
		
			string s_unidades()
			
			{
			string id;
			cout << "Ingrese el codigo: ";
			cin >> id;	
			
	
		string s; //string que se piensa retornar
		s  = select(uunidades, id); //se utiliza la funcion de access.h select para buscar el registro.
		
		return s;
		
			}
			
			
		
		
		
  };
	
	
	



#endif
