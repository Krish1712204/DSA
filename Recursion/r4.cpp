//Print (N-1 )using recursion
#include<bits/stdc++.h>
using namespace std;


void f(int i,int n){
    if(i<1)
    return;
    cout<<i<<endl;
    f(i-1,n);
}
int main()
{

    int n=5;
    f(n,n);
    return 0;
}