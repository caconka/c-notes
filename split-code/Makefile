OBJS = main.o employees.o salary.o
CFLAGS = -g -Wall

all: program

program: $(OBJS)
	gcc -o $@ $?

%.o: %.c employees.h salary.h
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f program $(OBJS)

.PONY: clean
