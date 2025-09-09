//Trabalhando com variaveis

#include <stdio.h>

int main(void){
	//em C é preciso declarar as variáveis
	int porta = 80;
	char ip[] = "192.168.192.33";
	float ver = 1.1;
	
	printf("Desec Security \n");
	printf("Scan Versao %.1f \n", ver);
	printf("Varrendo Host: %s na porta %i \n", ip, porta);

	return 0;
}
