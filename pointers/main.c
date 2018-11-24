#include <stdio.h>

void pointers(int* x, int y) {
	*x = 32; // En la dirección de memoria de d (&d) guardamos el valor 32
	y = 32;
}

int main() {
	int d = 10;
	int n = 10;

	printf("Inicio: d = %d\n", d);
	printf("Inicio: n = %d\n", n);

	pointers(&d, n);

	printf("Fin: d = %d\n", d); // d = 32 debido a que se está operando con un
	// puntero. En el procedimiento pointers() se le asigna el valor 32
	printf("Fin: n = %d\n", n); // n = 10 debido a que se le pasa como copia
	return 0;
}
