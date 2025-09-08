#include <stdio.h>
#include <netdb.h> //lib para o gethostbyname
#include <arpa/inet.h>

int main(int argc, char *argv[]){
	
	if(argc <=1 ){
		
		printf("\n\nModo de uso: ./resolver www.businesscorp.com.br\n");
		return 0;
	}
	else{
		
		struct hostent *alvo = gethostbyname(argv[1]);
		
		if(alvo == NULL){

		printf("Ocorreu um erro: (\n)");

		}
		else{

			//print("IP: %s\n", alvo->h_addr);
			//vamos precisar de uma função para traduzir o que o h_addr traz, pois ele não traz
			// as informações em ASCII
			printf("IP: %s\n", inet_ntoa(*((struct in_addr *)alvo -> h_addr)));
		}

		return 0;
}
}
