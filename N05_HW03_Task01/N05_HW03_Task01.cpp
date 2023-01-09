// N05_HW03_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Calculator {
    public:
        double num1;
        double num2;

        double add() { // - ����� ������ ���������� ��������� �������� num1 � num2
            return num1 + num2;
        }
        double multiply() { // - ����� ������ ���������� ��������� ������������ num1 � num2
            return num1 * num2;
        }
        double subtract_1_2() { // - ����� ������ ���������� ��������� ��������� num2 �� num1
            return num1 - num2;
        }
        double subtract_2_1() { // - ����� ������ ���������� ��������� ��������� num1 �� num2
            return num2 - num1;
        }
        double divide_1_2() { // - ����� ������ ���������� ��������� ������� num1 �� num2
            return num1 / num2;
        }
        double divide_2_1() { // - ����� ������ ���������� ��������� ������� num2 �� num1
            return num2 / num1;
        }
        bool set_num1(double num1) { // - ����� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
            if (num1 != 0) {
                this->num1 = num1;
                return true;
            }
            else {
                std::cout << "Wrong number!" << std::endl;
                return false;
            }
        }
        bool set_num2(double num2) { // - ����� ������ ���������� �������� ���� num2 ������ �������� ��������� num2 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
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