#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
    return gcd(b, a % b);
}
int lcd(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    int n,m;
    cin>>n>>m;
    int fib[m+1];
    fib[0]=0, fib[1]=1;
    for(int i=2;i<=m;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    int max, min;
    if(fib[n]>fib[m])
    {
        max = fib[n];
        min = fib[m];
    }
    else
    {
        max = fib[m];
        min = fib[n]; 
    }
    cout<<lcd(max, min)<<endl;
    return 0;
}