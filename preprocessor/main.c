#include <stdio.h>

// Con define podemos definir una variable y el preprocesador la sustituirá por
// el valor en tiempo de compilación
#define LIMIT 80
#define PREMIUM

// Definimos una macro para pequeñas operaciones que se repiten mucho
#define AREA_RECT(x, y) (x * y)

// Podemos hacer que salte un error
//#error No compiles esto

int main() {
#if LIMIT < 50
	printf("El límite es menor de 50.\n");
#elif LIMIT < 90
	printf("El límite es menor de 90.\n");
#else
	printf("El límite es igual o mayor a 90.\n");
#endif
	printf("El límite es igual a %d.\n", LIMIT);

// Comprobamos si está definida la variable. #ifndef sería negación
#ifdef PREMIUM
	printf("Estás usando la versión premium.\n");
#else
	printf("Estás usando la versión gratuita.\n");
#endif

	// AREA_RECT es una macro que calculará en tiempo de compilación el resultado
	int width = 5, length = 4;
	printf("El área de un rectángulo de lados %d y %d es igual a %d. \n",
			width, length, AREA_RECT(width, length));
	return 0;
}
