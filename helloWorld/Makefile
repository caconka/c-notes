OBJS = main.o
CFLAGS = -g -Wall

# Para indicar que el objetivo principal es program, sino coge el primero
all: program

program: $(OBJS)
	gcc -o $@ $?
	# $@ indica el nombre del objetivo
	# $? es todos los requisitos que necesita program, en este caso es sólo main.o
	# RESULT -> gcc -o program main.o

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@
	# $< es el primero de los requisitos, en este caso sólo hay uno y es main.c
	# RESULT -> gcc -g -Wall -c main.c -o main.o

clean:
	@echo "Cleaning..."
	rm -f program $(OBJS)
	# Por cada objetivo la consola imprimirá el comando que está ejecutando, si
	# queremos que no se imprima le podemos poner un @ delante del comando
	# Las sentencias que empiezan por @ harán lo mismo pero sin imprimirlo

# Si clean fuera un archivo en el directorio, con esto le indicamos a make que
# clean no está asociado con ningún archivo
.PONY: clean
