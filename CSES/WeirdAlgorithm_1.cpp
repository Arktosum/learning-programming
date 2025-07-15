#include <bits/stdc++.h>

int main()
{

    long long n;
    std::cin >> n;
    std::cout << n << " ";
    while (n > 1)
    {
        if ((n & 1) == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        std::cout << n << " ";
    }
}