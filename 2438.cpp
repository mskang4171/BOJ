#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int count = 0;
        while (count < i)
        {
            std::cout << "*";
            count++;
        }
        std::cout << std::endl;
    }
    return 0;
}