#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

struct Frame
{
    int _dts;
    int _pts;
    int _data;

    bool operator<(const Frame& fe)
    {
        return this->_pts < fe._pts;
    }

    bool operator>(const Frame& fe)
    {
        return this->_pts > fe._pts;
    }
};

int main()
{
    int N;
    std::cin >> N;
    std::vector<Frame> vt;
    std::unordered_map<int, int> up;
    for (int i = 0; i < N; i++)
    {
        Frame tmp;
        std::cin >> tmp._dts;
        std::cin >> tmp._pts;
        std::cin >> tmp._data;
        vt.push_back(tmp);
        up[tmp._dts] = tmp._data;
    }

    std::sort(vt.begin(), vt.end());

    for (auto& v : vt)
    {
        if (v._data > 0) std::cout << v._data;
        else std::cout << up[v._dts - 1];
        std::cout << " ";
    }


    return 0;
}