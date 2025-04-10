// Esse codigo e a versao anterior do argumentos.c
//o Ricardo foi aprimorando o codigo mas eu achei interessante ter esse
//guardado tambem

#include <stdio.h>

int main(int argc,char *argv[]){

    if(argc<2){
        printf("Modo de uso: ./argumentos0 192.168.0.1 443 \n");

    }
     else{
        printf("Varrendo Host %s na Porta %s \n", argv[1], argv[2]);
        return 0;
    }

}
