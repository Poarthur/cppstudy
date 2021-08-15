#include <iostream>
#include <cstdlib>
#include <ctime>

typedef unsigned short int usint;
const usint x = 1;
const usint o = 2;
const usint size_of_field = 9;

void show_field(usint* field)
{
    std::cout << ((field[0] == 0) ? "_" : (field[0] == x ? "X" : "O")) << "|"
              << ((field[1] == 0) ? "_" : (field[1] == x ? "X" : "O")) << "|"
              << ((field[2] == 0) ? "_" : (field[2] == x ? "X" : "O")) << std::endl;
    std::cout << ((field[3] == 0) ? "_" : (field[3] == x ? "X" : "O")) << "|"
              << ((field[4] == 0) ? "_" : (field[4] == x ? "X" : "O")) << "|"
              << ((field[5] == 0) ? "_" : (field[5] == x ? "X" : "O")) << std::endl;
    std::cout << ((field[6] == 0) ? " " : (field[6] == x ? "X" : "O")) << "|"
              << ((field[7] == 0) ? " " : (field[7] == x ? "X" : "O")) << "|"
              << ((field[8] == 0) ? " " : (field[8] == x ? "X" : "O")) << std::endl;
    std::cout << std::endl;
}

void set_user_pos(usint* field)
{
    usint user_cur_pos = 0;
    do
    {
        std::cout << "Input from 1 to 9:" << std::endl;
        show_field(field);
        std::cin >> user_cur_pos;
        user_cur_pos = user_cur_pos == 0 ? size_of_field + 1 : user_cur_pos;
    } while(user_cur_pos > size_of_field || field[user_cur_pos-1] != 0);
    field[user_cur_pos-1] = x;
}
void set_pc_pos(usint* field)
{
    usint pc_cur_pos = 0;
    do
    {
        pc_cur_pos = std::rand() % 9 + 1;
    } while(pc_cur_pos > size_of_field || field[pc_cur_pos-1] != 0);
    field[pc_cur_pos-1] = o;
}

int is_win(usint* field)
{
    const usint part_of_field = size_of_field / 3;
    for(int i = 0; i < part_of_field; ++i)
    {
        //horizontal
        if(field[0 + i*3] == field[1 + i*3] && field[1 + i*3] == field[2 + i*3])
        {
            if(field[0 + i*3] == x) return x;
            if(field[0 + i*3] == o) return o;
        }
        //vertical
        if(field[0 + i] == field[3 + i] && field[3 + i] == field[6 + i])
        {
            if(field[0 + i] == x) return x;
            if(field[0 + i] == o) return o;
        }
    }
    if(field[0] == field[4] && field[4] == field[8])
    {
        if(field[0] == x) return x;
        if(field[0] == o) return o;
    }
    if(field[2] == field[4] && field[4] == field[6])
    {
        if(field[2] == x) return x;
        if(field[2] == o) return o;
    }
    return 0;
}

int main()
{
    usint field[size_of_field] = {0};
    std::srand(std::time(nullptr));
    int winner = 0;
    while(!winner)
    {
        set_user_pos(field);
        show_field(field);
        winner = is_win(field);
        set_pc_pos(field);
        show_field(field);
        winner = is_win(field);
        if(winner)
        {
            if(winner == x) std::cout << "X is won" << std::endl;
            else std::cout << "0 is won" << std::endl;
            break;
        }
    }
}