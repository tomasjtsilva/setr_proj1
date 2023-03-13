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
	int tamanho = 0;
	struct myFifo umfifo;
	
		printf("Função de teste iniciada.......\n");
		printf("Número de inteiros a colocar no FIFO: ");
		scanf("%d",&tamanho);
		printf("\n");
		ret = MyFIFOInit(&umfifo, tamanho);
		
	
	
	return ;
}
