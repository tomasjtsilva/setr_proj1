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
	
	struct myFifo meufifo;
	int ret =-1;
	int val=0;
	
	
		printf("Função de TESTE iniciada.......\n\n");
		
		/*#################--#################*/
		/*Inicializar o FIFO*/
		ret = MyFIFOInit(&meufifo, 10);
		
		/*#################--#################*/
		/*Inserir valores no FIFO*/
			printf("PARA terminar Insira->9999\n");
			printf("Insira um valor: ");
			scanf("%d",&val);
		do{
			if(val!=9999)
				ret=MyFIFOInsert(&meufifo, val);
			
			if(ret==1)
			{
				printf("-------------------->Valor inserido com SUCESSO\n");
			}else{
				   printf("----------------->FAIL-> FIFO CHEIO, necessario lerValores");
				  }
				  
		 printf("Insira um valor: ");
		 scanf("%d",&val);
		 }while(val!=9999);	
		 
		
		/*#################--#################*/
		/* remover o valor FIFO*/
		val=0;
		printf("PARA Remover Insira->1 OU STOP Insira->9999\n");
	    printf(">>>>>>>>>Remover????");
		scanf("%d",&val);
		do{			
			ret=MyFIFORemove(&meufifo);
			if(ret!=9999)
			{
				printf("Valor Removido------->%d\n",ret);
			}else{
					printf("FIFO Vazio\n");
					val=ret;		
					
				}
		  scanf("%d",&val);
		  }while(val!=9999);
		  
		  
		  
		/*#################--#################*/
		/* Le o valor mais antigo do FIFO*/
		val=0;
		printf("PARA LER Valor Insira->1 OU STOP Insira->9999\n");
		scanf("%d",&val);
	    do{
	    ret=MyFIFOPeep(&meufifo);
	    if(ret!=9999)
	    {
			printf("Valor lido= %d\n",ret);
		}else{
				printf("FIFO VAZIO");
				val=9999;
			 } 
	    scanf("%d",&val);
		}while(val!=9999);  
		  
		 
		 		  
		/*#################--#################*/
		/* Le o numero de elementos presentes no FIFO */
		val=0;
		printf("PARA LER Insira->1 OU STOP Insira->9999\n");
		scanf("%d",&val);
	    do{
	    ret=MyFIFOSize(&meufifo);
	    if(ret!=0)
	    {
			printf("Numero de elementos= %d\n",ret);
		}else{
				printf("FIFO VAZIO");
				val=9999;
			 } 
	    scanf("%d",&val);
		}while(val!=9999);   
		  
		  
		
	
	
	return ;
}
