#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
void main()
{
	int server_socket;
	char server_message[256];
	int htonsval=(9002);
	//printf("htons=%d",htonsval);
	
	printf("Enter your text:\n");
	scanf("%[^\n]s",server_message);
	server_socket=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in server_address;
	server_address.sin_port=htons(9002);
	server_address.sin_addr.s_addr=INADDR_ANY;

	bind(server_socket,(struct socketaddr*) &server_address,sizeof(server_address));
	listen(server_socket,5);
	
	int client_socket;
	client_socket=accept(server_socket,NULL,NULL);
	//printf("clientSocket=%d",client_socket);
	send(client_socket,server_message,sizeof(server_message),0);
	close(server_socket);
}

