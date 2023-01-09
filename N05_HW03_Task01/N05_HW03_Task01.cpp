// N05_HW03_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Calculator {
    public:
        double num1;
        double num2;

        double add() { // - метод должен возвращать результат сложения num1 и num2
            return num1 + num2;
        }
        double multiply() { // - метод должен возвращать результат перемножения num1 и num2
            return num1 * num2;
        }
        double subtract_1_2() { // - метод должен возвращать результат вычитания num2 из num1
            return num1 - num2;
        }
        double subtract_2_1() { // - метод должен возвращать результат вычитания num1 из num2
            return num2 - num1;
        }
        double divide_1_2() { // - метод должен возвращать результат деления num1 на num2
            return num1 / num2;
        }
        double divide_2_1() { // - метод должен возвращать результат деления num2 на num1
            return num2 / num1;
        }
        bool set_num1(double num1) { // - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
            if (num1 != 0) {
                this->num1 = num1;
                return true;
            }
            else {
                std::cout << "Wrong number!" << std::endl;
                return false;
            }
        }
        bool set_num2(double num2) { // - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
            if (num2 != 0) {
                this->num2 = num2;
                return true;
            }
            else {
                
                return false;
            }
        }
};

int main()
{
    
    bool a = true;
    while (a = true) {
        double x, y;
        std::cout << "Enter number num1: ";
        std::cin >> x;
        std::cout << "Enter number num2: ";
        std::cin >> y;
        Calculator calc;
        calc.set_num1(x);
        calc.set_num2(y);
        if (calc.set_num1(x) && calc.set_num2(y) ){
            std::cout << "num1 + num2 = " << calc.add() << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;;
            std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;;
            std::cout << "num1 * num2 = " << calc.multiply() << std::endl;;
            std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;;
            std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;;
            std::cout << std::endl;
        }
        else
        {
            std::cout << "Wrong number!\n" << std::endl;
            continue;
        }     
    };
}