#include <iostream>
#include "teste.h"

	int main(){

		int x = somar (10 , -2);

		int y = subtrair(10, 7);

		int z = multiplicar(10, 5);

		int a = dividir(20, 4);


		imprimir (x);
		imprimir (y);
		imprimir (z);
		imprimir (a);

		return EXIT_SUCCESS;
	}