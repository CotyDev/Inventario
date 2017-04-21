
#include "access.h"
#include <iostream>
#include <string>
#include <sstream>

#ifndef CATEGORIA_H
#define CATEGORIA_H
using namespace std;

const string ucategoria = "BD/categoria.txt";
const string uacategoria = "BD/categoria_auxiliar.txt";

class data_categoria{
	public:
		string cat_id;
		string cat_descr;	
	public:
		//Constructor de la clase
		
		data_categoria
		(
		string cat_id,
		string cat_descr
		)
		
		{
			//Inicializacion de las clases
			this->cat_id = cat_id;
			this->cat_descr = cat_descr;	
		}
		int i_categoria()
		{
			string registro = this->cat_id + "\t" + this->cat_descr + "\n";
			string registro2 = this->cat_descr;
			//insert(ucategoria,registro2);
			insert(ucategoria,registro);
			insert(uacategoria,registro2);
			return 1;
		}
		string s_categoria()
		{
			string s;
			s = select(ucategoria,this->cat_id);
			return s;
		}		
};



#endif
