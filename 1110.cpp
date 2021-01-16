#include <iostream>

int main()
{
    int n;
    int cycle = 0;
    std::cin >> n;
    int a = n;
    while (true)
    {
        cycle += 1;
        a = (a % 10) * 10 + ((a / 10) + (a % 10)) % 10;
        if (a == n)
        {
            break;
        }
    }
    std::cout << cycle;
    return 0;
}