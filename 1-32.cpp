#include <iostream>
int main()
{
    int a, b;
    std::cout << "Ingrese un numero: ";
    std::cin >> a;
    std::cout << "Ingrese otro numero: ";
    std::cin >> b;

    if (a % b == 0)
    {
        std::cout << a << " es multiplo de " << b << std::endl;
    }
    else
    {
        std::cout << a << " no es multiplo de " << b << std::endl;
    }

    return 0;
}