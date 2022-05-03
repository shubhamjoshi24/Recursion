// print 1 to n numbers using recursion
#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    else
    {
        func(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    func(n);
    return 0;
}

/*
// second method
void func1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << endl;
        func1(i + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    func1(1, n);
    return 0;
}*/

// using backtracking.
/*void func2(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    func2(i - 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    func2(n, n);
    return 0;
}*/