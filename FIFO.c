#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"




/* Esta Funçao tem como objetivos alocar memoria para um FIFO
 * Mais info no .h 
 * */
 
int MyFIFOInit(struct myFifo *fila, int tamanho)
{

	
		/*instanciar alocar memoria para uma fifo*/
		fila->max_size = tamanho;
		fila->list = (int *) malloc((fila->max_size)*sizeof(int));
		
			
		/*atribuir ao tail e ao head o endereço inicial da lista*/
		fila->tail = 0;
		fila->head = tamanho;
		fila->count=0;
	
		/*print de debug*/
		
					
	return 0;
}

/* Esta Funçao tem como objetivo inserir valores no FIFO
 * Mais info no .h 
 * */

int MyFIFOInsert(struct myFifo *fila, int dado)
{
	int ret=0;								//por defeito fifo esta cheio
		
	/*verificar de o Fifo esta livre*/
	if(fila->count < fila->max_size) 		//NOTA:garante que os ponteiros nunca se interceptam
	{
		fila->list[fila->tail]=dado; 		//adiciona o valor
		
		if(fila->tail == fila->max_size-1) 	//fifo Circular!!!!!!
		{
			fila->tail=0;					//vai para a 1ª posiçao OU ENTAO
		}else{ fila->tail++; }				//incrementa a tail
			
		fila->count++;						//sinaliza mais um elemento inserido
		ret=1;								//retorna 1-> SUCESSO
	}
		
			
	return ret;

}

/* Esta Funçao tem como objetivo remover valores no FIFO
 * Mais info no .h 
 * */
int MyFIFORemove(struct myFifo *fila)
{
	int ret=9999;							//valor 9999 sinaliza Buffer vazio			
	
	if(fila->count > 0)						//Verifica se O FIFO esta Vazio
	{
		if(fila->head == fila->max_size)	//FIFO Circular Incrementa a head
		{
			fila->head=0;
		}else{ fila->head++; }
		
		ret=fila->list[fila->head];			//Le o valor
		fila->count--;
		
	}
	

	return ret;	
}


/* Esta Funçao tem como objetivo LER o valor mais antigo do FIFO 
 * Mais info no .h 
 * */
int MyFIFOPeep(struct myFifo *fila)
{
	int ret=9999;							//valor 9999 sinaliza buffer Vazio
	
	if(fila->count > 0)						//Verifica se O FIFO esta Vazio
	{
		if(fila->head >= fila->max_size)	//se estivermos no final do FIFO voltamos ao inicio
		{
		ret = fila->list[0];		
		}else{
			 ret = fila->list[fila->head+1];	//(tail-1) pois a tail esta senpre no anterior	
			}
	}
		return ret;
}


/* Esta Funçao tem como objetivo LER o numero de Itens no FIFO 
 * Mais info no .h 
 * */
int MyFIFOSize(struct myFifo *fila)
{
	int ret=0;							//valor 9999 sinaliza buffer Vazio
	
	if(fila->count > 0)						//Verifica se O FIFO esta Vazio
	{
		ret = fila->count;		//tail-1 pois a tail esta senpre no seguinte vazio
	}
		return ret;
}

