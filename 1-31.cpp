#include <iostream>
int main()
{
    int j;
    std::cout << "Ingrese un numero entero: " << std::endl;
    std::cin >> j;
    if (j % 2 == 0)
    {
        std::cout << "El numero es par." << std::endl;
    }
    else
    {
        std::cout << "El numero es impar." << std::endl;
    }
    return 0;
}