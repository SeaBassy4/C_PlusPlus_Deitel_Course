#include <iostream>
int main()
{
    int a, b, c;
    std::cout << "Introduzca tres numeros enteros diferentes: ";
    std::cin >> a >> b >> c;
    std::cout << "La suma es : " << a + b + c << std::endl;
    std::cout << "El promedio es : " << (a + b + c) / 3.0 << std::endl;
    std::cout << "El producto es : " << a * b * c << std::endl;
    std::cout << "El menor es: ";
    if (a < b && a < c)
    {
        std::cout << a << std::endl;
    }
    else if (b < a && b < c)
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << c << std::endl;
    }

    std::cout << "El mayor es: ";
    if (a > b && a > c)
    {
        std::cout << a << std::endl;
    }
    else if (b > a && b > c)
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << c << std::endl;
    }
    return 0;
}