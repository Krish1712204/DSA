#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Sum of all numbers from 1 to n which are divisible by 3
    int n;
    cout << "Enter n: ";
    cin >> n;
   
    int factorial = 1; // Initialize factorial to 1

    for(int i=1;i<=n;i++)
    {
        factorial= factorial * i; // Calculate factorial


    }
    cout<<"Factorial of " << n << " is: " << factorial << endl;
     return 0;

}