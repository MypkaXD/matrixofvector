#include"Vector.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    MyVector a(5);
    a[0] = 1;
    a[1] = 2;
    a[2] = 6;
    a[3] = -1;
    a[4] = 0;
    MyVector b(5);
    b[0] = 0;
    b[1] = 0;
    b[2] = 2;
    b[3] = 1;
    b[4] = 1;

    std::cout << "\ta = " << a << "\n\tb = " << b << std::endl;
    std::cout << "---------------------------"<<std::endl;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "Пустой вектор на 3 элемента: " << MyVector(3) << std::endl;
    std::cout << "a * 3 = " << a * 3 << std::endl;

    b *= 3;
    std::cout << "b * 3 = " << b << std::endl;


}

