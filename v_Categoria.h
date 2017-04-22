#include "Categoria.h"



#ifndef V_CATEGORIA_H
#define V_CATEGORIA_H 1


using namespace std;

class v_categoria 
{
	public:
		string cat_id;
		string cat_descr;
		
		v_categoria() {}//Constructor . . .
		
		int i_categoria() 
		{
			do
			{
				cout << "Codigo: ";
				cin >> this->cat_id;
				if (this->cat_id.length() != 5) {cerr << "ERROR: El codigo debe ser de longitud 5 \n";}		
				
			}while( this->cat_id.length() != 5 );
			
			do
			{
				cout <<"Descripcion: ";
				cin >> this->cat_descr;
				if (this->cat_descr.length() > 20) {cerr << "ERROR: La descripcion debe tener una longitud menor o igual a 20";}
			}while(this->cat_descr.length() > 20);
			
			data_categoria objcategoria(this->cat_id,this->cat_descr);
			objcategoria.i_categoria();
			
			return 1;
		}
		
		
		string s_categoria()
	{
			string id;
		cout << "Ingrese el codigo: ";
		cin >> id;
		string s;
		s = select(ucategoria,id);
		return s;
	}
		
		
};

#endif
