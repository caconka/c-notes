#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("¿Cuántos elementos quieres almacenar? ");
	int length;
	scanf("%d", &length);

	// La función malloc() devuelve un void* y para que nos devuelva por ejemplo
	// un puntero de float debemos indicarlo (float*)
	// En este caso se está multiplicando por el tamaño que ocupa el tipo que
	// queremos guardar, porque un float ocupa por ejemplo 4 bytes
	float* values = (float*) malloc(length * sizeof(float));

	// Si hay error en malloc devuelve NULL
	if (values == NULL) {
		printf("No tienes suficiente memoria.\n");
		return 1;
	}

	for (int i = 0; i < length; i++) {
		values[i] = 5.55E6;
	}

	printf("Todo está correcto.\n");

	// Para liberar la memoria que está siendo reservada por la función malloc()
	// Después de free() no podemos volver a acceder a los valores que había antes
	free(values);

	return 0;
}
