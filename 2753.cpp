#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n % 4 == 0)
    {
        if (n % 100 != 0 || n % 400 == 0)
        {
            std::cout << 1;
            return 0;
        }
    }
    std::cout << 0;
    return 0;
}