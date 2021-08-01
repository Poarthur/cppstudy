#include <iostream>

int main()
{
    int user_answer = 0;
    std::cout << "What units need to be be converted to kilograms?" << std::endl;
    std::cout << "1. ton" << std::endl;
    std::cout << "2. gramm" << std::endl;
    std::cout << "3. carat" << std::endl;
    std::cout << "4. pound" << std::endl;
    std::cout << "5. ounce" << std::endl;
    std::cout << "6. pood" << std::endl;
    std::cout << "Press 0 to convert from kilograms" << std::endl;
    std::cin >> user_answer;
    
    if(user_answer == 0)
    {
        std::cout << "Kg to:" << std::endl;
        std::cout << "1. ton" << std::endl;
        std::cout << "2. gramm" << std::endl;
        std::cout << "3. carat" << std::endl;
        std::cout << "4. pound" << std::endl;
        std::cout << "5. ounce" << std::endl;
        std::cout << "6. pood" << std::endl;
        std::cin >> user_answer;
        if(user_answer == 1)
        {
            double weight = 0.0;
            std::cout << "Insert weight: ";
            std::cin >> weight;
            std::cout << weight << " kilos is " << weight / 1000 << " t" << std::endl;
        }
        if(user_answer == 2)
        {
            double weight = 0.0;
            std::cout << "Insert weight: ";
            std::cin >> weight;
            std::cout << weight << " kilos is " << weight * 1000  << " g" << std::endl; 
        }
        if(user_answer == 3)
        {
            double weight = 0.0;
            std::cout << "Insert weight: ";
            std::cin >> weight;
            std::cout << weight << " kilos is " << weight / 0.0002 << " ct" << std::endl; 
        }
        if(user_answer == 4)
        {
            double weight = 0.0;
            std::cout << "Insert weight: ";
            std::cin >> weight;
            std::cout << weight << " kilos is " << weight / 0.453592 << " ld." << std::endl; 
        }
        if(user_answer == 5)
        {
            double weight = 0.0;
            std::cout << "Insert weight: ";
            std::cin >> weight;
            std::cout << weight << " kilos is " << weight / 0.0283495 << " oz" << std::endl; 
        }
        if(user_answer == 6)
        {
            double weight = 0.0;
            std::cout << "Insert weight: ";
            std::cin >> weight;
            std::cout << weight << " kilos is " << weight / 16.3804964 << " pud" << std::endl; 
        }
    }

    if(user_answer == 1)
    {
        double weight = 0.0;
        std::cout << "Insert weight: ";
        std::cin >> weight;
        std::cout << weight << " t is " << 1000 * weight << " kilos" << std::endl;
    } else if(user_answer == 2)
    {
        double weight = 0.0;
        std::cout << "Insert weight: ";
        std::cin >> weight;
        std::cout << weight << " g is " << 0.001 * weight << " kilos" << std::endl;
    } else if(user_answer == 3)
    {
        double weight = 0.0;
        std::cout << "Insert weight: ";
        std::cin >> weight;
        std::cout << weight << " ct is " << 0.0002 * weight << " kilos" << std::endl;
    } else if(user_answer == 4)
    {
        double weight = 0.0;
        std::cout << "Insert weight: ";
        std::cin >> weight;
        std::cout << weight << " ld. is " << 0.453592 * weight << " kilos" << std::endl;
    } else if(user_answer == 5)
    {
        double weight = 0.0;
        std::cout << "Insert weight: ";
        std::cin >> weight;
        std::cout << weight << " oz is " << 0.0283495 * weight << " kilos" << std::endl;
    } else if(user_answer == 6)
    {
        double weight = 0.0;
        std::cout << "Insert weight: ";
        std::cin >> weight;
        std::cout << weight << " pud is " << 16.3804964 * weight << " kilos" << std::endl;
    } else 
    {
        std::cout << "Wrong data" << std::endl;
    }
    
}