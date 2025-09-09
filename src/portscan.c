#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h> // para a função do inet_addr
#include <unistd.h> // para a funcao close()

int main(int argc, char *argv[]){

	int meusocket;
	int conecta;

	int porta;
	int inicio = 0;
	int final = 6553; //numero de portas disponiveis
	char *destino;
	destino = argv[1];

	struct sockaddr_in alvo;

	for(porta=inicio; porta<final; porta++){

		//O esses parametros estou pegando da biblioteca socket, posso acessar utilizando  comando man socket
		// Eu vou precisar do int domain, que é a familia do protocolo, int type os tipos que ele suporta (vou usar o SOCK_STREAM que é o TCP), int protocol para vermos o proocolo basta rodar o comando
		// cat /etc/protocols, o protocolo IPé o 0.

		meusocket = socket(AF_INET,SOCK_STREAM,0);
		alvo.sin_family = AF_INET;
		alvo.sin_port = htons(porta);
		//estou usando o inet como no código anterior para converter de forma correta o endereço
		alvo.sin_addr.s_addr = inet_addr(destino);

		// Agora precisamos fazer a conex]ão, e como fazemos ?
		//podemos acessar o man connect e ver lá o que precisa

		conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

		if (conecta == 0){
			printf("Porta %d - Status [Aberta] \n", porta);
			close(meusocket);
			close(conecta);
		}
		else {
			// para não ficar poluido não vou ficar colocando "porta fechada"
			close(meusocket);
			close(conecta);

		}
	}

}
