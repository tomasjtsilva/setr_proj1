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
	int op=99;
	
do{
		printf("########### MENU_TESTE ###########\n");
		printf("1-> Inicializar o FIFO\n");
		printf("2-> Inserir valores no FIFO\n");
		printf("3-> Remover valores do FIFO\n");
		printf("4-> Ler o valor mais antigo do FIFO\n");
		printf("5-> Ver quantos elementos estao no FIFO\n");
		printf("6-> TERMINAR\n\n");
		printf("Escolha a opçao-> ");
		scanf("%d",&op);
			
		switch(op)
		{
				case 1: /*Inicializar o FIFO*/
				printf("Insira o tamanho do seu FIFO: ");
				scanf("%d",&val);
				ret = MyFIFOInit(&meufifo, val);
				break;
				
				
				case 2: /*Inserir valores no FIFO*/
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
						printf("----------------->FAIL-> FIFO CHEIO, necessario ler Valores\n");
					}
				  
					printf("Insira um valor: ");
					scanf("%d",&val);
				}while(val!=9999);
				break;
				
				
				
				case 3: /* remover o valor FIFO*/
				val=0;
				printf("PARA Remover Insira->1 OU STOP Insira->9999\n");
				printf(">>>>>>>>>Remover????\n");
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
				break;
				
				
								
				case 4:
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
				break;
				
				
				
				case 5:/* Le o numero de elementos presentes no FIFO */
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
		  		break;
			
				case 6: /* Termina o programa*/
				return ;
				break;	
			
				default:
				printf("\n   ?!?!?! Opçao Invalida ?!?!?!?\n");
		}//switch(op)
		
}while(1);		
 
		  

	
	return ;
}
