// provides required data types
#include <sys/types.h>
// holds address family and socket functions
#include <sys/socket.h>
// has the sockaddr_in structure
#include <netinet/in.h>
// has functions for read and write operations
#include <fcntl.h>
// basic C header
#include <stdio.h>
// header to help with strings
#include <string.h>
// has macros such as EXIT_FAILURE
#include<stdlib.h>
// port through which connection is to be made
#define CONNECTION_PORT 2424

int main()
{
    int listen_fd = 0;
    struct sockaddr_in server_addr;
    struct sockaddr hali;

    char buff[1024];
    
    // CREATE SOCKET
    listen_fd = socket(AF_INET, SOCK_STREAM, 0);
    // fill them up with '0' characters. 
    memset(&server_addr, '0', sizeof(server_addr));
    memset(buff, '0', sizeof(buff));

    // fill server address
    server_addr.sin_family      = AF_INET;
    // htonl converts arg from host byte order to network byte order (prob. big endian, as that's what TCP/IP uses)
    // INADDR_ANY is 0x00000000 and is supposed to accept any incoming message. I don't understand this part. Shouldn't it be our address?
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port        = htons(5000);

    // Bind assigns data to the prev. created socket, this is clear. But why this cast is legit...
    // I still have to study that!
    if (0 != bind(listen_fd, (struct sockaddr*)&server_addr, sizeof(server_addr))) {
        fprintf(stderr, "Error while binding listening socket.");
    }

    listen(listen_fd, 10);

    return 0;
}