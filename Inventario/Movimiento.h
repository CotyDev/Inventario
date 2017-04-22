#ifndef Movimiento
#define Movimiento

class Movimiento{
	char MOV_id[5];
	char TMOV_id[5];
	char ART_id[5];	
	int MOV_cantidad;	
	int MOV_total;
	int MOV_subtotal;
	int MOV_descuento;
	int MOV_fecha;	
	
};

FILE* Movimiento_file;
char* Movimiento_file_name("Movimiento.txt");
  Movimiento_file = fopen (Movimiento_file_name,"w");
  
  //completar con la variables y parametros que se usen en el main
  
  fclose(Movimiento_file);
  
  
#endif
