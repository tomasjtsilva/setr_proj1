#ifndef _FIFO_H
#define FIFO_H

/** \Name file: FIFO.h
 * 	\Description: Este ficheiro pretende defenir as funçoes de criaço e
 * 		gestao de um FIFO. Temos presente a estrutura de dados, a inicializaço dessa mesma
 *  estrutura, funçao de inserçao de valores inteiros, função para 
 *  remoço de valores inteiros, funço de visualizao do ultimo numero
 *  inserido, e funço de visualiaço do numero de itens inseridos.
 *  
 * 	\Author: Fernando&Tomas
 * 	\Date: 13/03/2023
 * 	\bug: nao existem bugs detetatos 
 *  
 */


/** \Defeniçao da estrutura de dados FIFO
 *    Esta estrutura conte uma variavel para defenir o numero de elementos presentes, o 
 * ponteiro para cabeça da lista e para a cauda da lista, sendo que a cabeço sinaliza sempre 
 * o valor mais antigo a ler e a cauda sinaliza a posição do ultimo valor introduzido na lista,
 * assim como o tamanha maximo a instaciar e um ponteiro para om array de inteiros
 * 
 * 	\Author: Fernando&Tomas
 * 	\max_size: define o numero maximo de elementos a armazenar na lista
 * 	\*list: ponteiro para um array de valores(podem ser de varios tipos dependendo da instanciação)
 * 	\tail: enumeraço da cauda da Lista
 * 	\head: enumeraçao da cabeça da lista
 * 	\count: numero de elementos existentes na lista
 * 	\Date: 13/03/2023
 * 
 */
struct myFifo
{
	int max_size;
	int *list;
	int tail;
	int head;
	int count;
		
};

/** \Intancia um fifo com a estrutura acima descrita
 *    Funço instancia a estrutura de dados myFifo acima decrita
 * 
 * 	\Author: Fernando&Tomas
 * 	\*fila: ponteiro para a estrutura de dados declarada
 * 	\tamanho: tamanho maximo FIFO
 * 	\Date: 13/03/2023
 * 
 */
int MyFIFOInit(struct myFifo *fila, int tamanho);


/** \ Insere valores inteiros no FIFO
 *   Atualiza os ponteiros da tail e numero de intens
 *   Insere um intero de cada vez
 * 
 * \Author: Fernando&Tomas
 * \Input:  Ponteiro para a estrutura de dados do FIFO
 * \Input:	Valor a inserir
 * \Output:	RETORNA 1 -> SUCESSO OU RETORNA 0 -> INSUCESSO-> FIFO CHEIO
 * \Date: 13/03/2023
 * */
int MyFIFOInsert(struct myFifo *fila, int data);


/** \ Remove valores inteiros no FIFO
 * Atualiza os ponteiros da head e numero de intens
 * Remove um inteiro de cada vez
 * 
 * \Author: Fernando&Tomas
 * \Input: 	Ponteiro para a estrutura de dados do FIFO
 * \Output: RETORNA o valor Removido OU 9999->FIFO VAZIO
 * \Date: 13/03/2023 
 */
int MyFIFORemove(struct myFifo *fila);


/** \Le o valor mais antigo inserido no FIFO
 * 
 * \Author: Fernando&Tomas
 * \Input:	Ponteiro para a estrutura de dados do FIFO
 * \Output:	RETORNA o valor lido OU 9999->FIFO VAZIO
 * \Date: 13/03/2023 
 */
int MyFIFOPeep(struct myFifo *fila);


/** \Le o numero de intens presente no FIFO
 * 
 * \Author: Fernando&Tomas
 * \Input: 	Ponteiro para a estrutura de dados do FIFO
 * \Output: RETORNA o numero de Elementos do FIFO
 * \Date: 13/03/2023 	 
 */
int MyFIFOSize(struct myFifo *fila);

#endif
