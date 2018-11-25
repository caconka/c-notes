OBJS = main.o
CFLAGS = -g -Wall

all: structs

structs: $(OBJS)
	gcc -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f structs $(OBJS)
