// Recursive code for printing numbers from 0 to 3 :

// This code uses recursion to print numbers from 0 to 3. The base condition is when the count reaches 3, at which point the function returns without printing anything further. The count is incremented with each recursive call until the base condition is met.
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void print()
{

    // Base Condition.
    if (cnt == 10)
        return;
    cout << cnt << endl;

    // Count Incremented
    cnt++;
    print();
}

int main()
{
    print();
    return 0;
}