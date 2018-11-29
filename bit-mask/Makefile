OBJS = main.o
CFLAGS = -g -Wall

all: masking

masking: $(OBJS)
	gcc -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f masking $(OBJS)

.PONY: clean
