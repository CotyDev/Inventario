#include "v_categoria.h"
#include "v_articulo.h"
#include "v_plan_unidad.h"
#include "v_proveedores.h"
#include "v_unidades.h"
#include "conteo_fisico.h"
#include "conteo_detalle.h"
#include "v_lista_precios.h"

#ifndef MENU_H
#define MENU_H



using namespace std;
//esquema del menu

void menu(){
	
	v_articulo art;
	v_proveedores prov;
	v_plan_unidad p_unid;
	v_categoria cat;
	v_unidades uni;
	v_lista_precios lpre;
	//data_conteo_fisico conf;

int opc = 0;


while (opc != 99) {
	system("cls");
	cout << "\tBIENVENIDO!, Humano \n\n";
	cout << "\tMEDASOFT - " << "Sistema de inventario\n\n";
	cout<<"MENU \n"
	
	<<"Opciones de articulo\n\t"
	<<"11 Consultar \n\t"
	<<"12 Insertar \n\t"
	 
	<<"Opciones de proveedor \n\t"
	<<"21 Consultar\n\t"
	<<"22 Insertar\n\t"
	 
	<<"Opciones de plan de medida\n\t"
	<<"31 consultar\n\t"
	<<"32 Insertar\n\t"
	
	<<"Opciones de categoria \n\t"
	<<"41 Consultar\n\t"
	<<"42 Insertar\n\t"
	 
	<<"Opciones lista de precios\n\t" 
	<<"51 Consultar\n\t"
	<<"52 Insertar\n\t"
	
	<<"Reportes\n\t"
	<<"61 Lista de Articulos\n\n"
	<<"99 SALIR\n\n\n";

	cout << "Elija una opcion: ";
	cin >> opc;
	
	switch(opc){			//completar logica con funciones de inserccion y consulta
		
		case 11:
			system("cls");
			cout << "\n" << art.s_articulo();
			system("pause");
			
			break;
		case 12:
			
			system("cls");
			cout << "\n" << art.i_articulo();
			system("pause");
			
			break;
		case 21:
			system("cls");
			cout << "\n" << prov.s_proveedores();
			system("pause");
			
			break;
		case 22:
			system("cls");
			cout << "\n" << prov.i_proveedores();
			system("pause");
			
			break;
		case 31:
			system("cls");
			cout << "\n" << p_unid.s_plan_unidad();
			system("pause");
			
			
			break;
		case 32:
			
			system("cls");
			cout << "\n" << p_unid.i_plan_unidad();
			system("pause");
			
			break;
		case 41:
			system("cls");
			cout << "\n" << cat.s_categoria();
			system("pause");
			
			 break;
		case 42:
			system("cls");
			cout << "\n" <<cat.i_categoria();
			system("pause");
			
			break;
		case 51:
			system("cls");
			cout << "\n" << lpre.s_lista_precio();
			system("pause");
			
			break;
		case 52:
			system("cls");
			cout << "\n" << lpre.i_lista_precios();
			system("pause");
			break;
		case 61:
			system("cls");
			cout << "ID   \t" << "Descripcion" << mulstr(" ", 9) << "\tUnidad" << mulstr(" ",14) << "\tCategoria" << mulstr(" ", 11) << "\tProveedor" 
			<< mulstr(" ",11) << "\tPlan"<<mulstr(" ",16)<<"\tFecha de creacion   \t"<< "\n";			
			reporte(uarticulo);
			system("pause");
			break;

		case 99:
			break;
		default:
			cerr << "Elija una opcion valida";
			break;
		}
	}
	
}


#endif
