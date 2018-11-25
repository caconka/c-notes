OBJS = main.o
CFLAGS = -g -Wall

all: arrays

arrays: $(OBJS)
	gcc -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f arrays $(OBJS)
