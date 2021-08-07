#include <iostream>

bool to_upper(char* c)
{
    if(*c < 'a' || *c > 'z')
    {
        return false;
    }
    *c -= 32;
    return true;
}

int main()
{
    char a = '*';
    std::cout << a << std::endl;
    if(to_upper(&a))
    {
        std::cout << a << std::endl;
    }
}