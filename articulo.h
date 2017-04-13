#include <string.h>
#include <>
namespace capa_datos;

class data_articulo 
{
	public:
		char art_id[5];
		char art_desc[20];
		char uni_id[5];
		char cat_id[5]; //
		char prov_id[5]; //ID del proveedor que suministra este articulo
		char art_fecha_creacion[10]; //CAMBIR EL TIPO DE DATOS A UNO PARA MANEJO DE FECHAS... (BUSCAR LA LIB EN INTERNET)
		double art_precio_adq;  // precio de adquisiscion
		double art_precio_ven; // precio de venta
		double art_porc_sup; // porcentaje superior
		double art_porc_inf; // porcentaje inferior
};

int data_articulo::insert
	(	
		char art_id[5],
		char art_desc[20],
		char uni_id[5],
		char cat_id[5], //
		char prov_id[5], //ID del proveedor que suministra este articulo
		char art_fecha_creacion[10], //CAMBIAR EL TIPO DE DATOS A UNO PARA MANEJO DE FECHAS... (BUSCAR LA LIB EN INTERNET)
		double art_precio_adq,  // precio de adquisiscion
		double art_precio_ven, // precio de venta
		double art_porc_sup, // porcentaje superior
		double art_porc_inf,
	) 
	
	//CUERPO DE LA FUNCION 
	{
		FILE* f = fopen("../BD/articulo/articulos.txt","w"); //Abriendo le archivo que almacena los datos de los articulos
		
		char* registro = ;
			
		
	}
	
	


