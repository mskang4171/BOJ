#include <iostream>

int main()
{
    int n, x, a;
    std::cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        if (a < x)
        {
            std::cout << a << " ";
        }
    }
    return 0;
}