#include <iostream>
int main()
{
    int a;
    std::cout << "Ingrese un numero entero de 5 digitos: " << std::endl;
    std::cin >> a;
    int digito1 = a / 10000;
    int digito2 = (a / 1000) % 10;
    int digito3 = (a / 100) % 10;
    int digito4 = (a / 10) % 10;
    int digito5 = a % 10;
    std::cout << "Los digitos son: " << std::endl;
    std::cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << std::endl;
    return 0;
}