OBJS = main.o
CFLAGS = -g -Wall

all: preprocessor

preprocessor: $(OBJS)
	gcc -o $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f preprocessor $(OBJS)
