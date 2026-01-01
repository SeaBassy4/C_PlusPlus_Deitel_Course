#include <iostream>
int main()
{
    int a, b, c, d, e;
    std::cout << "Ingrese cinco numeros enteros separados por espacios: " << std::endl;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << "El Mayor numero es: ";
    if (a >= b && a >= c && a >= d && a >= e)
        std::cout << a << std::endl;
    else if (b >= a && b >= c && b >= d && b >= e)
        std::cout << b << std::endl;
    else if (c >= a && c >= b && c >= d && c >= e)
        std::cout << c << std::endl;
    else if (d >= a && d >= b && d >= c && d >= e)
        std::cout << d << std::endl;
    else
    {
        std::cout << e << std::endl;
    }

    std::cout << "El Menor numero es: ";
    if (a <= b && a <= c && a <= d && a <= e)
        std::cout << a << std::endl;
    else if (b <= a && b <= c && b <= d && b <= e)
        std::cout << b << std::endl;
    else if (c <= a && c <= b && c <= d && c <= e)
        std::cout << c << std::endl;
    else if (d <= a && d <= b && d <= c && d <= e)
        std::cout << d << std::endl;
    else
    {
        std::cout << e << std::endl;
    }

    return 0;
}