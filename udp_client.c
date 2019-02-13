#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netint/in.h>
void main()
{
	int client_socket;
	client_socket=socket(AF_INET,SOCK_DGRAM,0);
}
