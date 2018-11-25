#include <stdio.h>
#include <string.h>

struct account {
	char name[30];
	char last_name[40];
	int id;
	int balance;
};

// Las estructuras se pueden pasar como punteros para que tenga que copiarlas
void imrpimir_datos(struct account *c) {
	printf("El cliente %s %s tiene %d euros en su cuenta. \n",
			c->name, c->last_name, c->balance);
	// Al ser un puntero no podemos acceder a los campos de la estructura con la
	// notación de . por lo que para ello se hace con ->
	// Se podría hacer también (*c).name (*c).last_name pero es menos legible
}

// Definimos que Account va a ser un tipo struct account
typedef struct account Account;

int main() {
	// Account ahora es struct account
	Account c1;

	strcpy(c1.name, "Lola");
	strcpy(c1.last_name, "Gómez");
	c1.id = 12345;
	c1.balance = 1000;

	imrpimir_datos(&c1);

	return 0;
}
