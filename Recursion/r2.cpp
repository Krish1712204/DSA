// Problem: Print your Name N times using recursion

#include <bits/stdc++.h>
using namespace std;
void fun(int i, int n)
{
    // Base Condition.
    if (i > n)
        return;
    cout << "krishna" << endl;

     // Function call to print till i increments.
    fun(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    fun(1, n);
    return 0;
}