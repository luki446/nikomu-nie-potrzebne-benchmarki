#include <iostream>
#include <cstdlib>

int main(int argc, const char** argv)
{
    std::ios::sync_with_stdio(false);
    for(int i = 0; i < atoi(argv[1]); i++)
    {
        std::cout << "Hello World" << i << "\n";
    }
    return 0;
}