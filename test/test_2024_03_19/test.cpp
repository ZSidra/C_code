#include<iostream>

int search(int* num, int n)
{
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		int it = (begin + end) / 2;
		if (num[it] >= num[it - 1])
			begin = it;
		else
			end = it - 1;
	}

	//std::cout << begin << " " << end;

	return begin;
}

int main()
{
	int num[8] = { 1, 2, 2, 2, 2, 3, 2, 2};
	int n = search(num, 8);

	std::cout << n;

	return 0;
}