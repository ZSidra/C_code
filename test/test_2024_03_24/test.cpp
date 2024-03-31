#include <iostream>
#include <vector>

std::vector<std::vector<char>> map;
//int min_count1 = 1000000;
//int min_count2 = 1000000;

void run(int i, int j, int it, int jt, int count, int& min_count,std::pair<int, int> old)
{
	if (i == it && j == jt && count < min_count) min_count = count;
	
	if (map[i + 1][j] != '#' && (i + 1 != old.first && j != old.second))
		run(i + 1, j, it, jt, count + 1, min_count, std::make_pair(i, j));
	if (map[i - 1][j] != '#' && (i - 1 != old.first && j != old.second))
		run(i - 1, j, it, jt, count + 1, min_count, std::make_pair(i, j));
	if (map[i][j + 1] != '#' && (i != old.first && j + 1 != old.second))
		run(i, j + 1, it, jt, count + 1, min_count, std::make_pair(i, j));
	if (map[i][j - 1] != '#' && (i != old.first && j - 1 != old.second))
		run(i, j - 1, it, jt, count + 1, min_count, std::make_pair(i, j));

	return;
}

int main()
{
	int n, m;
	std::cin >> n >> m;
	
	map.resize(n + 1);
	for (auto& mp : map)
	{
		mp.resize(m + 1);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			std::cin >> map[i][j];
		}
	}
	int xa, ya, xb, yb, xc, yc;
	std::cin >> xa >> ya >> xb >> yb >> xc >> yc;

	int min_count1 = 1000000;
	int min_count2 = 1000000;
	run(xa, ya, xb, yb, 0, min_count1, std::make_pair(0, 0));
	run(xb, yb, xc, yc, 0, min_count2, std::make_pair(0, 0));

	int min = min_count1 + min_count2;

	std::cout << min;

	return 0;
}