#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"




/* Esta Funçao tem como objetivos alocar memoria para um FIFO
 * 
 * Data:
 * Author:
 * 
 * */
 
int MyFIFOInit(struct myFifo *fila, int tamanho)
{

	
		/*instanciar alocar memoria para uma fifo*/
		fila->max_size = tamanho;
		fila->list = (int *) malloc((fila->max_size)*sizeof(int));
		
			
		/*atribuir ao tail e ao head o endereço inicial da lista*/
		fila->tail = 0;
		fila->head = 99;
		fila->count=0;
	
		/*print de debug*/
		
					
	return 0;
}

