#include <iostream>

int main()
{
    char c = '*';
    for(int i = 0; i < 6; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            std::cout << c;
        }
        std::cout << std::endl;
    }
}
