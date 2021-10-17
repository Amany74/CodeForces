// problem : https://codeforces.com/problemset/problem/4/A?f0a28=1
#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
