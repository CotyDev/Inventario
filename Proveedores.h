#include <iostream>
#include <string>
#include <sstream>
#include "access.h"

#ifndef Proveedores
#define proveedores



const string uproveedores = "BD/proveedores.txt" //ubicacion del archivo del proveedor

using namespace std;

class data_proveedores{
	public:
		
	string prov_id;
	string prov_desc;
	string list_id;
	string prov_email;
	int prov_tel1;
	int prov_tel2;
	
	public:
					
	
	data_proveedores (string prov_id,
	string prov_desc,
	string list_id,
	string prov_email,
	int prov_tel1,
	int prov_tel2,)	{								//iniciando metodo constructor
		
		this->list_id = list_id;
		this->prov_desc = prov_desc;
		this->prov_email = prov_email;
		this->prov_id = prov_id;
		this->prov_tel1 = prov_tel1;
		this->prov_tel2 = prov_tel2;

		
			}	
			
			int i_proveedores(){			//metodo de insertar
				
			
				stringstream telefono;
				string tel[2];
				
				telefono<< this->prov_tel1;
				telefono>>tel[0];
				telefono.clear();
				
				telefono<<this->prov_tel2;
				telefono>>tel[1];
				telefono.clear();
				
			string proveedores = this->list_id + "\t" + this->prov_desc + "\t" + this->prov_email +
			"\t" + this.prov_id + "\t" + tel[0]	+ "\t" + tel[1] + "\n";
			
			insert(uproveedores,registro);
				
				
				
			}		
		
		
		
	
	
};


  

  
  
#endif
