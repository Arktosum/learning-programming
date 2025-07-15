#include <bits/stdc++.h>

int main()
{

    long long n;
    std::cin >> n;
    long long  val;

    long long arr_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> val;
        arr_sum += val;
    }

    long long sum = n * (n + 1) / 2;
    std::cout<<sum - arr_sum<<std::endl;
}