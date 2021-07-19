#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define port 8080 

int main (int argc , char const *argv[]){
	int server_fd , new_socket , valread ; 
	struct sockaddr_in address ; 
	int opt = 1 ; 
	int addrlen = sizeof(address); 
	char buffer[1024] = {0};
	char *hello = "Hellow from Server";

	//creating Socket File Discriptor 
	server_fd = socket(AF_INET , SOCK_STREAM , 0) ;   // including ip address and tcp protocol 
	if (server_fd == 0){
		perror ("Socket Faild");
		exit(EXIT_FALIURE) ; 

	}

	// forcefully attaching socket to the port 8080 

	if (setsockopt(server_fd , SOL_SOCKET , SO_REUSEADDR | SO_REUSEPORT , &opt , sizeof(opt))){
      perror("Set Socket Option");
      exit (EXIT_FALIURE); 
	}
	address.sin_family = AF_INET ; 
	address.sin_addr.s_addr = INADDR_ANY ; 
	address.sin_port = htons(PORT);

	// focefully attach Socket to the port 8080  

	

}

