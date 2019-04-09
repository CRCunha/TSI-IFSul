/*--------------------------------
* Arquivo: Exerc-5-1.c
*/

#include <stdio.h>
#include "Cheque.h"

int main() {
	int num1, num2;
	float val1, val2;
	Cheque ch1,ch2;

	printf("Informe o primeiro numero:");
	scanf("%d",&num1);

	printf("Informe o segundo numero:");
	scanf("%d",&num2);

	criaCheque(&ch1,num1);
	criaCheque(&ch2,num2);

	printf("Informe o valor do primeiro cheque:");
	scanf("%f",&val1);

	printf("Informe o valor do segundo cheque:");
	scanf("%f",&val2);

	emiteCheque(&ch1,val1);
	emiteCheque(&ch2,val2);

	exibeCheque(ch1);
	exibeCheque(ch2);

	if (obtemValor(ch1) < obtemValor(ch2))
		compensaCheque(&ch1);
	else
		compensaCheque(&ch2);

	printf("Situacao 1: %d\n", obtemSituacao(ch1));
	printf("Situacao 2: %d\n", obtemSituacao(ch2));
	printf("Numero 1: %d\n", obtemNumero(ch1));
	printf("Numero 2: %d\n", obtemNumero(ch2));

	return 0;
}
