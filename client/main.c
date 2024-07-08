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
    int socket_descriptor = 0;
    // AF_LOCAL is for local comm., so I might have to change this later
    socket_descriptor= socket(AF_LOCAL, SOCK_STREAM, 0);
    // debug print. Currently returrns 3, which is good
    printf("socket_descriptor = %d\n", socket_descriptor);

    return 0;
}