#include <stdio.h>

// Normalmente la memoria de los ordenadores que estamos acostumbrados a usar
// tienen celdas de 8 bits, 8 valores de 0 ó 1
// << desplaza tantas veces como le indiquemos a la izquierda, y el >> al revés
#define BLUE   1 << 7 // 1 0 0 0 0 0 0 0 -> 1 desplazado a la izquierda 7 posiciones
#define PINK   1 << 6 // 0 1 0 0 0 0 0 0
#define YELLOW 1 << 5 // 0 0 1 0 0 0 0 0
#define RED    1 << 4 // 0 0 0 1 0 0 0 0
#define GREEN  1 << 3 // 0 0 0 0 1 0 0 0
#define PURPLE 1 << 2 // 0 0 0 0 0 1 0 0
#define BROWN  1 << 1 // 0 0 0 0 0 0 1 0
#define BLACK  1 << 0 // 0 0 0 0 0 0 0 1


void operation(unsigned char colors) {
	printf("colors %u\n", colors); // 1 0 0 0 0 1 0 1 (133)

	// Usando el operador AND() & podremos comprobar si un color está encendido,
	// este operador sólo devolverá 1 si en ambas posiciones el bit es igual a 1.
	// 1 0 1 1 0 0 0 1  colors AND
	// 1 0 0 0 0 0 0 0  BLUE
	// ---------------
	// 1 0 0 0 0 0 0 0

	// Con esta reasignación con el AND() & y el NOT() ~ hacemos que colors nunca
	// tenga el color PURPLE. El NOT() invierte los bits.
	// Tenemos que ponerle el paréntesis a PURPLE porque sino el precompilador lo
	// sustituye por ~1 << 2 y obtendríamos un valor diferente
	colors &= ~(PURPLE);

	if (colors & BLUE) {
		printf("BLUE\n");
	}
	if (colors & PINK) {
		printf("PINK\n");
	}
	// En este caso nunca está encendido por la asignación de arriba
	if (colors & PURPLE) {
		printf("PURPLE\n");
	}
	if (colors & BLACK) {
		printf("BLACK\n");
	}

	// El operador XOR() ^ haría que fuese 1 si sólo hay un 1 en la operación
	// 1 0 1 1 0 0 0 1  colors XOR
	// 1 0 0 0 0 0 0 0  BLUE
	// ---------------
	// 0 0 1 1 0 0 0 1
}

int main() {
	// Con el OR() | podemos crear un valor que sólo tenga los bits que le pasamos
	// encendidos
	// 1 0 0 0 0 0 0 0  BLUE OR
	// 0 0 0 0 0 1 0 0  PURPLE OR
	// 0 0 0 0 0 0 0 1  BLACK
	// ---------------
	// 1 0 0 0 0 1 0 1  -> colors
	operation(BLUE | PURPLE | BLACK);
}
