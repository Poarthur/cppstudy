#include <iostream>

bool is_prime(int num)
{
    if(num < 2) return false;
    for(int i = 2; i < num; ++i)
    {
        if(num % i == 0) return false;
    }
    return true;
}

int main()
{
    std::cout << "Input some index: ";
    int index = 0;
    std::cin >> index;
    int num = 1;
    int index_out = index;
    for(; index; ++num)
    {
        if(is_prime(num))
        {
            index--;
        }
    }
    std::cout << index_out << "th prime number is " << num << std::endl;
}
