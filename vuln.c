#include "stdio.h"
#include "string.h"


    // strcpy function copy the string from source to destination
    // strcpy funtion doesn't check the size of the buffer. When the buffer is longer than 4 bytes the content of the the memory is overwritten
    // this cause the buffer overflow

int main(int argc, char **argv)
{
    char buffer[4];
    strcpy(buffer, argv[1]);
    printf("Buffer: %s\n", buffer);
    return 0;
}

