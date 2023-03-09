#Esta  a makefile para o projeto FIFO de SETR
#Gerar o executavel(aplicaço)
app1: main.o FIFO.o
	gcc -o main main.o FIFO.o

#Gerar FIFO.o
FIFO.o: FIFO.c FIFO.h
	gcc -c FIFO.c
	
#Gerar o main.o
main.o: main.c
	gcc -c main.c
	
clean:
	rm *.o
