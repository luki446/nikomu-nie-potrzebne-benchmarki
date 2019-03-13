#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char** argv)
{
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        printf("Hello World %i \n", i);
    }
    return 0;
}