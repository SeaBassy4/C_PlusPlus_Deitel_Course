#include <iostream>
int main()
{
    int a, b;
    std::cout << "Ingrese un numero: " << std::endl;
    std::cin >> a;
    std::cout << "Ingrese otro numero: " << std::endl;
    std::cin >> b;
    std::cout << "El numero mas grande entre los dos es: " << std::endl;

    if (a > b)
    {
        std::cout << a << std::endl;
    }
    else if (a == b)
    {
        std::cout << "Los dos numeros son iguales: " << std::endl;
        {
            std::cout << b << std::endl;
        }
    }
    else
    {
        std::cout << b << std::endl;
    }
}