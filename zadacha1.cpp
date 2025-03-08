#include <iostream>

class Calculator
{
private:

    double num1{};
    double num2{};

public:

    Calculator(double num1, double num2)
    {
        num1 = set_num1(num1);
        num2 = set_num2(num2);
        std::cout << "num1 + num2 = " << add() << std::endl;
        std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << multiply() << std::endl;
        std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << divide_2_1() << std::endl;
    }

private:

    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double num1)
    {
        if (true)
        {
            this->num1 = num1;
        }
        return true;
    }

    bool set_num2(double num2)
    {
        if (true)
        {
            this->num2 = num2;
        }
        return true;
    }

public:
    ~Calculator(){}

};



int main()
{
    setlocale(LC_ALL, "rus");

    double num1{};
    double num2{};

    bool running{true};

    while (running)
    {
        std::cout << "Введите num1: ";
        std::cin >> num1;

        while (num1 == 0)
        {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> num1;
        }

        std::cout << "Введите num2: ";
        std::cin >> num2;

        while (num2 == 0)
        {
            std::cout << "Неверный ввод!" << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> num2;
        }

        Calculator calculator(num1, num2);
    }

    return 0;
}


