#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
} Data;


int main(){
    Data horario1;
    Data horario2;

    printf("Digite o primeiro horario\n");
    printf("\nHORA[1] - ");
    scanf("%d", &horario1.hora);
    printf("\nMINUTO[1] - ");
    scanf("%d", &horario1.minuto);
    printf("\nSEGUNDO[1] - ");
    scanf("%d", &horario1.segundo);

    system("clear");
    printf("Digite o segundo horario\n");
    printf("\nHORA[2] - ");
    scanf("%d", &horario2.hora);
    printf("\nMINUTO[2] - ");
    scanf("%d", &horario2.minuto);
    printf("\nSEGUNDO[2] - ");
    scanf("%d", &horario2.segundo);

    if(horario1.hora < horario2.hora && horario1.hora != horario2.hora){
        system("clear");
        printf("%d : %d: %d", horario1.hora, horario1.minuto, horario1.segundo);
    }else{
        if(horario1.minuto < horario2.minuto && horario1.minuto != horario2.minuto){
            system("clear");
            printf("%d : %d: %d", horario1.hora, horario1.minuto, horario1.segundo);
        }else{
            if(horario1.segundo < horario2.segundo && horario1.segundo != horario2.segundo){
                system("clear");
                printf("%d : %d: %d", horario1.hora, horario1.minuto, horario1.segundo);
            }else{
                if(horario1.segundo != horario2.segundo){
                    system("clear");
                    printf("%d : %d: %d", horario2.hora, horario2.minuto, horario2.segundo);
                }
                else{
                    system("clear");
                    printf("Horarios Iguais");
                }
            }
        }
    }


    return 0;
}