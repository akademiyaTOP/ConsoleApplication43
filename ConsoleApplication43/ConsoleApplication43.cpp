// ConsoleApplication43.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int a(5), b(4);

    std::cout << &a << "  " << &b;

    std::cout << "\n\n";

    int tmp;
    tmp = a;
    a = b;
    b = tmp; 

    std::cout << a << "  " << b << std::endl;

    std::cout << "\n\n";

    std::cout << a << "  " << b << std::endl;
}

