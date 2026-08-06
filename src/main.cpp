#include <iostream>

// Header files
#include "lexer.h"

int main(void)
{
    while (true)
    {
        std::cout << gettok() << std::endl;
    }
}