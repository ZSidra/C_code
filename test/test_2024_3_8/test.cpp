#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int Min(int n1, int n2, int n3)
{
    return min(min(n1, n2), min(n1, n3));
}

int main() {
    // int a, b;
    // while (cin >> a >> b) { // 注意 while 处理多个 case
    //     cout << a + b << endl;
    // }

    string a, b;
    getline(cin, a);
    getline(cin, b);
    int lena = a.length();
    int lenb = b.length();
    cout << lena << lenb;
    vector<vector<int>> d;
    d.resize(lena + 1);
    for (auto _d : d)
    {
        _d.resize(lenb + 1, 0);
    }

    for (int i = 1; i <= lena; i++) d[i][0] = i;
    for (int j = 1; j <= lenb; j++) d[0][j] = j;
    for (int i = 1; i <= lena; i++)
    {
        for (int j = 1; j <= lenb; j++)
        {
            if (a[i - 1] != b[j - 1]) d[i][j] = Min(d[i - 1][j], d[i][j - 1], d[i - 1][j - 1]) + 1;
            else d[i][j] = d[i - 1][j - 1];
        }
    }

    cout << d[lena][lenb];
}