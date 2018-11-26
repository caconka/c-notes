#include <stdio.h>

#include "employees.h"

void print_employee(Employee* empl) {
	char* position;

	printf("|------- Empleado -----------------------------------|\n");
	printf("|   Nombre: %-40s |\n", empl->name);
	printf("| Apellido: %-40s |\n", empl->last_name);
	printf("|      PID: %-40s |\n", empl->id);
	switch (empl->position) {
		case ANALYST: position = "Alanista"; break;
		case DEVELOPMENT: position = "Desarrollo"; break;
		case SYSTEMS: position = "Sistemas"; break;
	}
	printf("|    Cargo: %-40s |\n", position);
	printf("|----------------------------------------------------|\n");
}
