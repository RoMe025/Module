#include <iostream>
#include <cstdlib>
#include <ctime>

static auto player(int playerNumber)
{
    int move;
    std::cout << "Игрок " << playerNumber << "введите число от -5 до 5: ";
    std::cin >> move;

   
    while (move < -5 || move > 5) {
        std::cout << "введите число от -5 до 5: ";
        std::cin >> move;
    }

    return move;
}

int main() 
{
    std::srand(std::time(0));
    int counter_value_p1{ 0 }, counter_value_p2{ 0 };

    for (int i = 0; i < 100; i++) 
    {
        
        counter_value_p1 += player(1);
        if (counter_value_p1 > 50) {
            std::cout << "Игрок 1 выигрывает!" << std::endl;
            return 0;
        }

        counter_value_p2 += player(2);
        if (counter_value_p2 > 50) {
            std::cout << "Игрок 2 выигрывает!" << std::endl;
            return 0;
        }
    }
    std::cout << "Игра окончена, ничья!" << std::endl;
    return 0;
}