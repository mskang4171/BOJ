#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    for (int i = 1; i <= 9; i++)
    {
        std::cout << a << " * " << i << " = " << a * i << std::endl;
    }
    return 0;
}