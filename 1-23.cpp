#include <iostream>
int main()
{
    int a, b;
    std::cout << "Ingrese un numbero: ";
    std::cin >> a;
    std::cout << "Ingrese otro numero: ";
    std::cin >> b;
    std::cout << "La suma es: " << a + b << std::endl;
    std::cout << "El producto es: " << a * b << std::endl;
    std::cout << "La diferencia es: " << a - b << std::endl;
    std::cout << "El cociente es: " << a / b << std::endl;
    return 0;
}