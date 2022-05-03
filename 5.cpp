// sum of numbers from 0 to n by parameter method.
#include <bits/stdc++.h>
using namespace std;

/*void func(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;

        return;
    }
    func(i - 1, sum + i);
}
int main()
{
    int n;
    cin >> n;
    func(n, 0);
    return 0;
}*/

// //sum of numbers from 0 to 1 by functional method.
// int func1(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + func1(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << func1(n);
//     return 0;
// }

// factorial of any number using recursion by functional method.
int func2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * func2(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << func2(n) << endl;
    return 0;
}