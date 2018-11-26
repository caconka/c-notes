OBJS = main.o
CFLAGS = -g -Wall

all: memory

memory: $(OBJS)
	gcc -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f memory $(OBJS)

.PONY: clean
