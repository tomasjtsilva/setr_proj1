
/** \file FIFO.h
 *	\author Fernando&Tomas 	
 *	\brief Este ficheiro pretende defenir as funçoes de criaço e
 * 		gestao de um FIFO. Temos presente a estrutura de dados, a inicializaço dessa mesma
 *  estrutura, funçao de inserçao de valores inteiros, função para 
 *  remoço de valores inteiros, funço de visualizao do ultimo numero
 *  inserido, e funço de visualiaço do numero de itens inseridos.
 *  
 * 	\date 13/03/2023
 * 	\bug nao existem bugs detetatos 
 *  
 */
 
#ifndef _FIFO_H
#define FIFO_H


/** \brief Defeniçao da estrutura de dados FIFO
 *    Esta estrutura conte uma variavel para defenir o numero de elementos presentes, o 
 * ponteiro para cabeça da lista e para a cauda da lista, sendo que a cabeço sinaliza sempre 
 * o valor mais antigo a ler e a cauda sinaliza a posição do ultimo valor introduzido na lista,
 * assim como o tamanha maximo a instaciar e um ponteiro para om array de inteiros
 * 
 * 	\author Fernando&Tomas
 * 	\param[in] max_size: define o numero maximo de elementos a armazenar na lista
 * 	\param[in] *list: ponteiro para um array de valores(podem ser de varios tipos dependendo da instanciação)
 * 	\param[in] tail: enumeraço da cauda da Lista
 * 	\param[in] head: enumeraçao da cabeça da lista
 * 	\param[in] count: numero de elementos existentes na lista
 * 	\date 13/03/2023
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

/** \brief Intancia um fifo com a estrutura acima descrita
 *    Funço instancia a estrutura de dados myFifo acima decrita
 * 
 * 	\author Fernando&Tomas
 * 	\param[in] *fila: ponteiro para a estrutura de dados declarada
 * 	\param[in] tamanho: tamanho maximo FIFO
 * 	\date 13/03/2023
 * 
 */
int MyFIFOInit(struct myFifo *fila, int tamanho);


/** \brief Insere valores inteiros no FIFO
 *   Atualiza os ponteiros da tail e numero de intens
 *   Insere um intero de cada vez
 * 
 * \author Fernando&Tomas
 * \param[in] *fila: Ponteiro para a estrutura de dados do FIFO
 * \param[in] data:	Valor a inserir
 * \param[out] RETORNA 1 -> SUCESSO OU RETORNA 0 -> INSUCESSO-> FIFO CHEIO
 * \date 13/03/2023
 * */
int MyFIFOInsert(struct myFifo *fila, int data);


/** \brief Remove valores inteiros no FIFO
 * Atualiza os ponteiros da head e numero de intens
 * Remove um inteiro de cada vez
 * 
 * \author Fernando&Tomas
 * \param[in] *fila:	Ponteiro para a estrutura de dados do FIFO
 * \param[out] RETORNA o valor Removido OU 9999->FIFO VAZIO
 * \date 13/03/2023 
 */
int MyFIFORemove(struct myFifo *fila);


/** \brief Le o valor mais antigo inserido no FIFO
 * 
 * \author Fernando&Tomas
 * \param[in] *fila: Ponteiro para a estrutura de dados do FIFO
 * \param[out]	RETORNA o valor lido OU 9999->FIFO VAZIO
 * \date 13/03/2023 
 */
int MyFIFOPeep(struct myFifo *fila);


/** \brief Le o numero de intens presente no FIFO
 * 
 * \author Fernando&Tomas
 * \param[in] *fila	Ponteiro para a estrutura de dados do FIFO
 * \param[out] RETORNA o numero de Elementos do FIFO
 * \date 13/03/2023 	 
 */
int MyFIFOSize(struct myFifo *fila);

#endif
