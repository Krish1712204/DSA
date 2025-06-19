#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Sum of all numbers from 1 to n which are divisible by 3
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) 
    {
        if (i % 3 == 0) // Check if the number is divisible by 3
        {
            sum += i; // Add it to the sum
        }
    }

    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3 is: " << sum << endl;

    return 0;
}
