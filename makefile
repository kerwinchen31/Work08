all: main.o sieve.o sieve.h
	gcc main.o sieve.o sieve.h -lm

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

main.o: main.c sieve.h
	gcc -c main.c 

clean:
	rm *.o

run:
	./a.out
