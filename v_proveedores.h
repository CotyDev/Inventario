#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include "Proveedores.h"


#ifndef V_PROVEEDORES_H
#define  V_PROVEEDORES_H


using namespace std;

class v_proveedores 
{
	private:
	string prov_id;
	string prov_desc;
	string list_id;
	string prov_email;
	string prov_tel1;
	string prov_tel2;
	public:
		v_proveedor() {}
		int i_proveedores()
		{
			do{
				cout << "Codigo:" ;
				cin >> this->prov_id;
				if(this->prov_id.length() !=5) {cerr << "ERROR: El codigo debe ser de 5 digitos. \n";}
			}while(this->prov_id.length() !=5);
			
			
			do{
				cout << "Descripcion: ";
				cin >> this->prov_desc;
				if(this->prov_desc.length() > 20) {cerr << "ERROR: La descripcion debe ser de 20 digitos. \n";}
			}while(this->prov_desc.length() > 20);
			
			do {
				cout << "Codigo de lista:";
				cin >> this->list_id;
				if(this->list_id.length() !=5) {cerr << "ERROR: El codigo debe ser de 5 digito \n";}
			}while(this->list_id.length() !=5);
			
			do {
				cout << "Email de Proveedor: ";
				cin >> this->prov_email;
				if(this->prov_email.length() > 30){cerr << "ERROR: La email no debe ser mas de 30 digitos. \n";} 
			}while(this->prov_email.length() > 30);
			
			do {
				cout << "Telefono 1: ";
				cin >> this->prov_tel1;
				if(this->prov_tel1.length() != 10) { cerr << "ERROR: El telefono debe de ser igual al 10 \n";}
			}while(this->prov_tel1.length() != 10);
			
			do {
				cout << "Telefono 2: " ;
				cin >> this->prov_tel2;
				if(this->prov_tel2.length() != 10) { cerr << "ERROR: El telefono debe de ser igual al 10 \n";}
			}while(this->prov_tel2.length() != 10);
			
			data_proveedores objproveedor (this->prov_id,this->prov_desc,this->list_id,this->prov_email,this->prov_tel1,this->prov_tel2);
			objproveedor.i_proveedores();
			return 1;
		}
		
	string s_proveedores(string id)
	{
		string s;
		s = select(uproveedores,id);
	}
	
};





#endif
