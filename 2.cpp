// print name n times
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << "shubham" << endl;
    func(++i, n);
}
int main()
{
    int n;
    cin >> n;
    func(1, n);
    // cout << "Jane Street" << endl;
    return 0;
}