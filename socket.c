#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h> // para a função do inet_addr
#include <unistd.h> // para a funcao close()

int main(void){

	int meusocket;
	int conecta;

	struct sockaddr_in alvo;

	//O esses parametros estou pegando da biblioteca socket, posso acessar utilizando  comando man socket
	// Eu vou precisar do int domain, que é a familia do protocolo, int type os tipos que ele suporta (vou usar o SOCK_STREAM que é o TCP), int protocol para vermos o proocolo basta rodar o comando
	// cat /etc/protocols, o protocolo IPé o 0.

	meusocket = socket(AF_INET,SOCK_STREAM,0);
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(81);
	//estou usando o inet como no código anterior para converter de forma correta o endereço
	alvo.sin_addr.s_addr = inet_addr("192.168.199.254");

	// Agora precisamos fazer a conex]ão, e como fazemos ?
	//podemos acessar o man connect e ver lá o que precisa

	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

	if (conecta == 0){
		printf("Porta Aberta \n");
		close(meusocket);
		close(conecta);
	}
	else {
		printf("Porta Fechada \n");

	}


}
