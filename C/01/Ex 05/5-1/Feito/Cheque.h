/*--------------------------------
* Arquivo: Cheque.h
*/

#ifndef Cheque_H
#define Cheque_H

/*--------------------------------
*  C�digos da situa��o do cheque
*/
#define EM_BRANCO  0
#define EMITIDO    1
#define COMPENSADO 2

/*--------------------------------
*  C�digos de erro
*/
#define SUCESSO 0
#define ERRO 1

typedef struct {
    int num;
	int situ;
    float valor;
} Cheque;

/*--------------------------------
*  Prot�tipos das fun��es
*/
void  criaCheque(Cheque *ch,int numero);
void  exibeCheque (Cheque ch);
int   obtemSituacao(Cheque ch);
float obtemValor(Cheque ch);
int   obtemNumero(Cheque ch);
int   emiteCheque(Cheque *ch, float valor);
int   compensaCheque(Cheque *ch);

#endif
