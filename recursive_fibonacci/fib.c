#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else 
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(int argc, char** argv)
{
    printf("%i", fib(atoi(argv[1])));

    return 0;
}
