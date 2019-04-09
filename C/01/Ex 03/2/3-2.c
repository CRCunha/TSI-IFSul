#include <stdio.h>
#include <stdlib.h>

struct Horario{
    int hora;
    int minuto;
    int segundo;
};

int main(){

    struct Horario horario1;
    struct Horario horario2;

//Entrada 1

    printf("Digite a hora do 1: ");
    scanf("%d", &horario1.hora);
    printf("\nDigite os minutos do 1: ");
    scanf("%d", &horario1.minuto);
    printf("\nDigite os segundos do 1: ");
    scanf("%d", &horario1.segundo);

    system("clear");

//Entrada 2

    printf("Digite a hora do 2: ");
    scanf("%d", &horario2.hora);
    printf("\nDigite o minuto do 2: ");
    scanf("%d", &horario2.minuto);
    printf("\nDigite o segundo do 2: ");
    scanf("%d", &horario2.segundo);

    system("clear");

//Saida

    if(horario1.hora > horario2.hora){
        printf("%d : %d : %d", horario1.hora, horario1.minuto, horario1.segundo);
    }
    else{
        if(horario1.hora < horario2.hora){
            printf("%d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);
        }
        else{
            if(horario1.minuto > horario2.minuto){
                printf("%d : %d : %d", horario1.hora, horario1.minuto, horario1.segundo);
            }
            else{
                if(horario1.minuto < horario2.minuto){
                    printf("%d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);
                }
                else{
                    if(horario1.segundo > horario2.segundo){
                        printf("%d : %d : %d", horario1.hora, horario1.minuto, horario1.segundo);
                    }
                    else{
                        if(horario1.segundo < horario2.segundo){
                            printf("%d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);
                        }
                        else{
                            printf("Horarios Iguais");
                        }
                    }
                }
            }
        }
    }

    return 0;
}