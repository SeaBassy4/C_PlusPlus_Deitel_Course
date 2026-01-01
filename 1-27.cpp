#include <iostream>
int main()
{
    int radio;
    const double pi = 3.1416;
    std::cout << "Ingrese el radio del circulo: " << std::endl;
    std::cin >> radio;
    std::cout << "El diametro es: " << 2 * radio << std::endl;
    std::cout << "La circunferencia es: " << 2 * radio * pi << std::endl;
    return 0;
}