#include "Plan_Unidad.h"


#ifndef V_PLAN_UNIDAD_H
#define V_PLNA_UNIDAD_H 1

using namespace std;

class v_plan_unidad
{
	public:
		string plan_id;
		string plan_etiqueta;
		string plan_unidad;
		int plan_multiplo;
		
		v_plan_unidad() {} //Constructor...
		
		int i_plan_unidad() 
		{
			do 
			{
				cout << "Codigo: ";
				cin >> this->plan_id;
				
				if(this->plan_id.length() != 5) {cerr << "ERROR: La longitud del codigo debe ser igual a 5 \n";}
				
			}while(this->plan_id.length() != 5);
			
			do
			{
				cout << "Simbolo: ";
				cin  >> this->plan_etiqueta;
				if(this->plan_etiqueta.length() > 3) {cerr << "ERROR: Los simbolos no pueden ser de mas de 3 digitos \n";}
			}while(this->plan_etiqueta.length() > 3); 
			
			/*	do
			{
				cout << "Plan unidad: ";
				
					@Lista de planes....
				
				cin  >> this->plan_etiqueta;
				if(this->plan_etiqueta.length() != 5) {cerr << "ERROR: Los simbolos no pueden ser de mas de 3 digitos \n";}
			}while(this->plan_etiqueta > 3) */
			
			do 
			{
				cout << "multiplo: ";
				cin  >> this->plan_multiplo;
				
				if(this->plan_multiplo <= 0) {cerr << "ERROR: El multiplo debe ser mayor a 0";}
				
			}while(this->plan_multiplo <= 0);
			
			data_plan_unidad objplan_unidad(this->plan_id,this->plan_etiqueta,this->plan_unidad,this->plan_multiplo);
			objplan_unidad.i_plan_unidad();
			
			return 1;
			
			
		}
		
		
		string s_plan_unidad()
	{
			string id;
		cout << "Ingrese el codigo: ";
		cin >> id;
		string s;
		s = select(uplan,id);
		return s;
	}
		
		
		
		
		

};
#endif
