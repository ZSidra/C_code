#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    std:: string input;
    std::getline(std::cin, input);
    std::vector<int> v;
    for (int i = 0; i < input.size(); i += 2)
    {
        int num = input[i] - '0';
        v.push_back(num);
    }

    int iret = 0;
    double dret = 0.0;
    std::sort(v.begin(), v.end());
    if (v.size() % 2 == 1) std::cout << v[v.size() / 2];
    else
    {
        int left = v[v.size() / 2 - 1];
        int right = v[v.size() / 2];
        std::cout << (left + right) / 2.0f;
    }


    return 0;
}