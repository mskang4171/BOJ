#include <iostream>

int main()
{
    int t, i;
    std::cin >> t;
    int a[t], b[t];
    for (i = 0; i < t; i++)
    {
        std::cin >> a[i] >> b[i];
    }
    for (i = 0; i < t; i++)
    {
        std::cout << a[i] + b[i] << "\n";
    }
    return 0;
}