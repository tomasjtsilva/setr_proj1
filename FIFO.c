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
		fila->tail = *fila->list;  // O valor do tail é o valor onde se vai colocar o proxima valor
		fila->head = *fila->list; //  o valor da head vai ser o endereço do mais antigo
		fila->count=0; 
	
		/*print de debug*/
		printf("\nFunção Inicialização do FIFO.......\n");
		printf("Localização do FIFO: %p \n",fila->list);
		printf("Tamanho do FIFO: %d \n",fila->max_size);
		printf("Tail do FIFO: %d \n",fila->tail);
		printf("Head do FIFO: %d \n",fila->head);
					
	return 0;
}


int MyFIFOInsert(struct myFifo *fila)
{
		int data;
		printf("Função de inserção no FIFO inicializada.......\n");
		printf("Valor a inserir no FIFO: ");
		scanf("%d",&data);

		

	return 0;
}



