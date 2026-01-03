#include <iostream>
int main()
{
    std::cout << "numero  \t cuadrado \t cubo\n";
    for (int i = 0; i <= 10; ++i)
    {
        std::cout << i << "\t\t" << i * i << "\t\t" << i * i * i << std::endl;
    }
    return 0;
}