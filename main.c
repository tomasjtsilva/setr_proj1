/* Este modulo contem o main
 * 
 * Objetivo: realizar testes modulo FIFO.h 
 * 
 * Autor:  
 * Data: 
 * 
 * 
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"


//int MyFIFOInit(struct myFifo *fila, int tamanho);

void main(void)
{
	int ret =-1;
	struct myFifo umfifo;
	
		printf("Função de teste iniciada.......\n\n");
		ret = MyFIFOInit(&umfifo, 10);
			
	
	
	return ;
}
