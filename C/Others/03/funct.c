#include <stdio.h>
#include <stdlib.h>
#include "def.h"

int teste(*x){
    *x.numero = 1;

    if(x.numero == 1){
        return(0);
    }
    else{
        return(1);
    }
}