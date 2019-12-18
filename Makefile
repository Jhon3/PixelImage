CC=gcc

CFLAGS=-c -Wall

all: main

main: main.o background.o gerar.o leitura.o midpoint.o
	$(CC) main.o background.o gerar.o leitura.o midpoint.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c

background.o: background.c
	$(CC) $(CFLAGS) background.c

gerar.o: gerar.c
	$(CC) $(CFLAGS) gerar.c

leitura.o: leitura.c
	$(CC) $(CFLAGS) leitura.c

midpoint.o: midpoint.c
	$(CC) $(CFLAGS) midpoint.c

clean:
	rm *.o main
