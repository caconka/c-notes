OBJS = main.o
CFLAGS = -g -Wall

all: pointers

pointers: $(OBJS)
	gcc -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f pointers $(OBJS)

.PONY: clean
