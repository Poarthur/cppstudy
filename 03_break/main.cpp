#include <iostream>

int main()
{
    int counter = 0;
    for(int j = 0; j < 6; ++j)
    {
        for(int i = 0; i < 6; ++i)
        {
            std::cout << '*';
            if(i == counter)
            {
                counter+=1;
                break;
            }
        }
        std::cout << std::endl;
    }
}
