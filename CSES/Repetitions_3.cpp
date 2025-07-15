#include <bits/stdc++.h>

int main()
{
    std::string s;

    std::cin >> s;

    int largest = 0;
    int runningCount = 1;
    char prev_letter = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev_letter)
        {
            runningCount++;
        }
        else
        {
            prev_letter = s[i];
            largest = std::max(largest, runningCount);
            runningCount = 1;
        }
    }
    largest = std::max(largest, runningCount);
    std::cout << largest << std::endl;
}