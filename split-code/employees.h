// Definimos una GUARD para que este archivo no se compile varias veces, si el
// precompilador se encuentra que EMPLOYEE está definido no incluirá este
// archivo ya que lo tenemos encapsulado dentro del ifndef EMPLOYEE.
// Para compiladores más modernos podemos usar #pragma once -> mirar salary.h
#ifndef EMPLOYEE
#define EMPLOYEE

typedef enum position_t { ANALYST, DEVELOPMENT, SYSTEMS } Position;

typedef struct employee_t {
	char name[30];
	char last_name[40];
	char id[9];
	Position position;
} Employee;

// Los prototipos se especifican igual que la función pero sin cuerpo, de esta
// forma le estamos diciendo al compilador que en algún momento se va a
// encontrar con una función llamada print_employee y que recive un argumento
// empl de tipo puntero de Employee
void print_employee(Employee* empl);

#endif
