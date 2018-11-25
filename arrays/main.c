#include <stdio.h>

// Los arrays son punteros a espacios de memoria contiguos. C no tiene forma de
// saber cual es la longitud de un array.
// En este caso como argumento se le puede pasar int* ages o int ages[] sería =
float media(int* ages, int length) {
	int i;
	float acum = 0;

	for(i = 0; i < length; i++) {
		acum += ages[i];
	}

	return acum / length;
}

int main() {
	int length;
	int i, ages[length];

	// Los arrays se pueden inicializar así int ages[2] = {18, 23};
	printf("¿Cuantos elementos vas a meter? ");
	scanf("%d", &length);

	for (i = 0; i < length; i++) {
		printf("Introduce la edad %d: ", i+1);
		scanf("%d", &ages[i]);
	}
	printf("La edad media es %f", media(ages, length));

	return 0;
}
