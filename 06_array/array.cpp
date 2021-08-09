#include <iostream>

void zerro_arr(int* a, int size)
{
    for(int i = 0; i < size; ++i)
    {
        a[i] = 0;
    }
}

int main()
{
    int arr[3];
    int* p = arr;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < arr_size; ++i)
    {
        arr[i] = i + 1;
    }
    zerro_arr(arr,arr_size);
    for(int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
    std::cout << "sizeof arr " << sizeof(arr) << std::endl;
    std::cout << "sizeof p " << sizeof(p) << std::endl;
}