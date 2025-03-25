// aqui vai ser abordado sobre entrada de dados

#include <stdio.h>

int main(void){
	int porta;
	// é possível passar quantos caracteres eu quero receber
	char ip[16];
	
	// O scanf mesmo passando a quantidade de caracteres que eu quero receber,
	// ele não limita a entrada do usuário, fazendo com que isso vire uma falha, 
        // de segurança, uma função mais segura seria a fgets
	printf("Desec Security\n");
	printf("Digite o IP: \n");
	//scanf("%s", &ip);
	// com essa função é possível passar a quandidade de caracteres que a variável vai guardar
	// ela vai guardar - a menos no caso pois tem o caractere /0 que é o de encerramento de string

	fgets(ip,16,stdin);
	printf("Digite a porta: \n");
	scanf("%i", &porta);

	printf("Varrendo host: %s na porta %i", ip, porta);

	return 0;
}
