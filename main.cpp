// CMPS 3350 - lab 1 is all abput source control AND git
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc - 1; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    return 0;
}

