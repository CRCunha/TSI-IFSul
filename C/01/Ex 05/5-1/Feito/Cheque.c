/*--------------------------------
* Arquivo: Cheque.c
*/

#include <stdio.h>
#include "Cheque.h"

/*-----------------
* S: um cheque
* E: numero do cheque
*/
void criaCheque(Cheque *ch,int numero) {
	ch->num = numero;
	ch->valor = 0;
	ch->situ = EM_BRANCO;
}

/*-----------------
* E: um cheque
*/
void exibeCheque (Cheque ch) {
	printf("Numero: %d  Valor: %f  Situacao: %d\n", ch.num, ch.valor, ch.situ);
}

/*-----------------
* E: um cheque
* R: Código da situação do cheque
*/
int  obtemSituacao(Cheque ch) {
	return ch.situ;
}

/*-----------------
* E: um cheque
* R: Valor do cheque
*/
float obtemValor(Cheque ch) {
	return ch.valor;
}

/*-----------------
* E: um cheque
* R: O número do cheque
*/
int obtemNumero(Cheque ch) {
	return ch.num;
}

/*-----------------
* E/S: um cheque
* E: valor do cheque
* R: Código de erro
*/
int emiteCheque(Cheque *ch, float valor) {
	if (ch->situ != EM_BRANCO)
		return ERRO;
	else {
		ch->valor = valor;
		ch->situ = EMITIDO;
		return SUCESSO;
	}
}

/*-----------------
* E/S: um cheque
* R: Código de erro
*/
int compensaCheque(Cheque *ch) {
	if (ch->situ != EMITIDO)
		return ERRO;
	else {
		ch->situ = COMPENSADO;
		return SUCESSO;
	}
}
