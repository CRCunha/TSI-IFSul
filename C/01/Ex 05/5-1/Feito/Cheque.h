/*--------------------------------
* Arquivo: Cheque.h
*/

#ifndef Cheque_H
#define Cheque_H

/*--------------------------------
*  Códigos da situação do cheque
*/
#define EM_BRANCO  0
#define EMITIDO    1
#define COMPENSADO 2

/*--------------------------------
*  Códigos de erro
*/
#define SUCESSO 0
#define ERRO 1

typedef struct {
    int num;
	int situ;
    float valor;
} Cheque;

/*--------------------------------
*  Protótipos das funções
*/
void  criaCheque(Cheque *ch,int numero);
void  exibeCheque (Cheque ch);
int   obtemSituacao(Cheque ch);
float obtemValor(Cheque ch);
int   obtemNumero(Cheque ch);
int   emiteCheque(Cheque *ch, float valor);
int   compensaCheque(Cheque *ch);

#endif
