#include <stdio.h>
#include <string.h>

// No necesitamos incluir el employees.c porque hemos definido en el archivo de
// cabeceras employees.h un prototipo de la función print_employee también, así
// que no fallará al compilar y encontrarse con esa llamada a la función
#include "employees.h"
#include "salary.h"

int main() {
	Employee e;
	strncpy(e.name, "Pepito", 30);
	strncpy(e.last_name, "Perez", 40);
	strncpy(e.id, "273884", 9);
	e.position = ANALYST;

	print_employee(&e);
	pay_salary(&e);

	return 0;
}
