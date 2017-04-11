#ifndef Tipo_movimiento
#define Tipo_Movimiento

class Tipo_Movimiento{
	
	public:
	
	char TMOV_id[5];
	char TMOV_desc[20];
	char MOV_factor[2];	
	
	
}; 

FILE* Tipo_movimiento_file;
char* Tipo_movimiento_file_name("Tipo_Movimiento.txt");
  Tipo_movimiento_file = fopen (Tipo_movimiento_file_name,"w");
  
  //completar con la variables y parametros que se usen en el main
  
  fclose(Tipo_movimiento_file);
  
  
#endif
