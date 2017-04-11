#ifndef Lista_precios
#define Lista_precios

//NOTA: falta agregar los parametros para completar las funciones que estaran en el main

class Lista_precios{
	
	public:
	char LIST_id[5];
	char LIST_desc[20];
	int LIST_moneda;

	
	
};

FILE* List_precios_file;
char* List_precios_file_name("Lista_precios.txt");
  List_precios_file = fopen (List_precios_file_name,"w");
  
  //completar con la variables y parametros que se usen en el main
  
  fclose(List_precios_file);
  
  
#endif
