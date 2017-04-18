#include <iostream>
#include <string>
#include <sstream>
#include "access.h"

#ifndef UNIDADES_H
#define UNIDADES_H

const string uunidades = "BD/unidades.txt";
class data_unidades {
	public:
	string uni_id;
	string uni_descr;
	string uni_etiqueta;
	public:
		//Declaracion del Constructor 
	data_unidades 
	(
		string uni_id,
		string uni_descr,
		string uni_etiqueta
	)
	{
		this->uni_id = uni_id;
		this->uni_descr = uni_descr;
		this->uni_etiqueta = uni_etiqueta; 
			
	}
	int i_unidades()
	{
		string registro = this->uni_id + "\t" + this->uni_descr + "\t" + this->uni_etiqueta;
		insert(uunidades,registro);
		return 1;
	}
	
	string s_unidades()
	{
		string s;
		s = select(uunidades,this->uni_id);
		return s;
	}
				
};


#endif
