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

/*
 * Intancia um fifo com a estrutura acima descrita
 * input: ponteiro uma alocaçao +tamanho do fifo(numeros inteiros)
 * 
 * */
int MyFIFOInit(struct myFifo *fila, int tamanho);


/*
 * Insere valores inteiros no FIFO
 * Atualiza os ponteiros da tail e numero de intens
 * Insere um intero de cada vez
 * Input: 
 *  Ponteiro para a estrutura de dados do FIFO
 * 	Valor a inserir
 * Output: 
 * 	RETORNA 1 -> SUCESSO
 * 	RETORNA 0 -> INSUCESSO-> FIFO CHEIO
 * 
 * */
int MyFIFOInsert(struct myFifo *fila, int data);


/*
 * Remove valores inteiros no FIFO
 * Atualiza os ponteiros da head e numero de intens
 * Remove um inteiro de cada vez
 * Input: 
 * 	Ponteiro para a estrutura de dados do FIFO
 * Output: 
 * 	RETORNA o valor Removido OU 9999->FIFO VAZIO
 * 	 
 * */
int MyFIFORemove(struct myFifo *fila);


/*
 * Le o valor mais antigo inserido no FIFO
 * Input: 
 * 	Ponteiro para a estrutura de dados do FIFO
 * Output: 
 * 	RETORNA o valor lido OU 9999->FIFO VAZIO
 * 	 
 * */
int MyFIFOPeep(struct myFifo *fila);


/*
 * Le u numero de intens presente no FIFO
 * Input: 
 * 	Ponteiro para a estrutura de dados do FIFO
 * Output: 
 * 	RETORNA o numero de Elementos do FIFO
 * 	 
 * */
int MyFIFOSize(struct myFifo *fila);

#endif
