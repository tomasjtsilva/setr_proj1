#ifndef _FIFO_H
#define FIFO_H


/*estrutura do FIFO*/
typedef struct
{
	int *list;
	int *tail;
	int *head;	
		
} myFifo;



int MyFIFOInit(int size);

#endif
