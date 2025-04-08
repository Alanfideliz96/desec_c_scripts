// podemos ver mais informações sobre as funções digitando no terminal
// main função ex: main system, me retornou toda a documentação e que ela precisa da stdlib.h declarada

#include <stdio.h>
#include <stdlib.h>

int main (void){
	printf("Portas TCP Abertas: \n");
	system("netstat -nlpt");
	return 0;
}
