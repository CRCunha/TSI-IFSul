#include<stdio.h>
#include <stdlib.h>

int calcDivisao (int x, int y, float *r);

int main(){
	int v1, v2;
	float div;
	printf("Valores:");
	scanf("%d %d",&v1, &v2);
	if (calcDivisao(v1,v2,&div) == 0)
		printf("Divisao realizada com sucesso: %.2f\n",div);
	else
		printf("Nao foi possivel realizar a divisao\n");	
    system("pause");
}


int calcDivisao (int x, int y, float *r){
	if (y == 0)
		return 1;
	else{
		*r = (float)x/(float)y;
		return 0;
	}
}
