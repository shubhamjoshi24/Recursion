// print numbers b/w n to 1.
#include <bits/stdc++.h>
using namespace std;
/*void func(int n, int i)
{
    if (i <= n)
    {
        cout << i << endl;
        func(n, i + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    func(n, 1);
    return 0;
}*/

/*
void func1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    func1(i - 1, n);
}
int main()
{
    int n;
    cin >> n;
    func1(n, n);
    return 0;
}*/

void func2(int i, int n)
{

    if (i > n)
    {
        return;
    }
    func2(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    func2(1, n);
    return 0;
}