#ifndef _FIFO_H
#define FIFO_H

/*tipo da estrutura de dados FIFO*/
struct myFifo
{
	int max_size;
	int *list;
	int tail;
	int head;
	int count;
		
};
//typedef struct myFifo myFifo_t;


int MyFIFOInit(struct myFifo *fila, int tamanho);

#endif
