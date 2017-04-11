#ifndef Proveedores
#define proveedores

//NOTA: falta agregar los parametros para completar las funciones que estaran en el main
class provedores{
	public:
		
	char PRO_id[5];
	char PRO_desc[20];
	char LIST_id[5];
	char PRO_email[20];
	int PRO_tel1;
	int PRO_tel2;
	
};

FILE* PRO_file;
char* PRO_file_name("proveedores.txt");
  PRO_file = fopen (PRO_file_name,"w");
  
  //completar con la variables y parametros que se usen en el main
  
  fclose(PRO_file);
  
  
#endif
