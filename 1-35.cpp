#include <iostream>
int main()
{
    std::cout << static_cast<int>('A') << std::endl;
    std::cout << static_cast<int>('B') << std::endl;
    std::cout << static_cast<int>('C') << std::endl;
    std::cout << static_cast<int>('a') << std::endl;
    std::cout << static_cast<int>('b') << std::endl;
    std::cout << static_cast<int>('c') << std::endl;
    std::cout << static_cast<int>('0') << std::endl;
    std::cout << static_cast<int>('1') << std::endl;
    std::cout << static_cast<int>('2') << std::endl;
    std::cout << static_cast<int>('$') << std::endl;
    std::cout << static_cast<int>('*') << std::endl;
    std::cout << static_cast<int>('+') << std::endl;
    std::cout << static_cast<int>('/') << std::endl;
    std::cout << static_cast<int>(' ') << std::endl;
    return 0;
}