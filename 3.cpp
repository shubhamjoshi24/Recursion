// print odd numbers b/w 1 to n.
#include <bits/stdc++.h>
using namespace std;
void func(int n)
{

    if (n == 0)
    {
        return;
    }
    else
    {
        //     if (n % 2 == 1)
        //     {
        //         cout << n << endl;
        //     }
        func(n - 1);
        if (n % 2 == 1)
        {
            cout << n << endl;
        }
    }
}
int main()
{
    int n;
    // cin >> n;
    // cout << "Jane Street" << endl;
    func(100);
    return 0;
}