#include <stdio.h>

#include "employees.h"

void pay_salary(Employee* e) {
	int salary = 2000;
	printf("Pagando %d € a %s %s.\n",
			salary, e->name, e->last_name);
}
