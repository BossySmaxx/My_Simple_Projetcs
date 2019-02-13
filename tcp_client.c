#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
void main()
{

	int network_socket;
 	network_socket=socket(AF_INET,SOCK_STREAM,0);
	//printf("Network_socket=%d\n");
	struct sockaddr_in server_address;
	//printf("sock_addr=%d\n",server_address);
	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(9002);
	server_address.sin_addr.s_addr=INADDR_ANY;

	int connection_status=connect(network_socket,(struct sockaddr *) &server_address, sizeof(server_address));

	if(connection_status==-1)
	{
	printf("There's some connection problem to the romote socket......\n");
	printf("%d\n",connection_status);
	}
	char server_response;

	recv(network_socket,&server_response,sizeof(server_response),0);

	printf("Server Response:%s\n",server_response);
	close(network_socket);
}
