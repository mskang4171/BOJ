#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    std::cout << min << " " << max;
}