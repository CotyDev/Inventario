#include <iostream>
#include <string>
#include <sstream>
#include "access.h"

#ifndef PLAN_UNIDAD_H
#define PLAN_UNIDAD_H


const string uplan = "BD/plan.txt";
using namespace std;

class data_plan_unidad {
	public:
		string plan_id;
		string plan_etiqueta;
		string plan_unidad;
		int plan_multiplo;
		public:
			data_plan_unidad
			(
				string plan_id,
				string plan_etiqueta,
				string plan_unidad,
				int plan_multiplo
			)		
			{
				this->plan_id = plan_id;
				this->plan_etiqueta = plan_etiqueta;
				this->plan_unidad = plan_unidad;
				this->plan_multiplo = plan_multiplo;
				
				 
			}
	int i_plan_unidad()
	{
		stringstream numero;
		string num[1];
		numero << this->plan_multiplo;
		numero >> num[0];
		numero.clear();
		
	
		string registro = this->plan_id + "\t" + this->plan_etiqueta + "\t"+ this->plan_unidad + "\t" + num[0] + "\n";
		insert(uplan,registro);
		return 1;
	}	
	
	string s_plan()
		{
			string s;
			s = select(uplan,this->plan_id);
			return s;
		}			
};

#endif
