// N05_HW03_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

class Counter {
public:
    
    int count;
    Counter(int x) { 
        count = x;
    }

    void print_count() {
        std::cout << "Count: " << count << std::endl;
    }
    void increment() {
        this->count += 1;
    }
    void decrement() {
        this->count -= 1;
    }
};

int main()
{   
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string input;
    int start = 1;
    
    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::cin >> input;
    
    if (input == "��") {
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> start;
    }

    Counter counter(start);
    //counter.print_count();
    do {
        std::cout << "������� ������� ('+', '-', '=' ��� '�'): ";
        std::cin >> input;
        if (input == "+") {
            counter.increment();
            //counter.print_count();
        }
        if (input == "-") {
            counter.decrement();
            //counter.print_count();
        }
        if (input == "=") {
            counter.print_count();
        }
    }
    while(input != "�");

    std::cout << "�� ��������!";
    
}