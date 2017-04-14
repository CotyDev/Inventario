#include <iostream>
#include <string>
#include "articulo.h"
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <sstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) 
{
	
	data_articulo art("A0001","Hola","U0001","C0001","P0001","22/2/17",1,1,1,1);
	art.i_articulo();
	return 0;
}
