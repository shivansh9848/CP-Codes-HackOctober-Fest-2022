#include "bits/stdc++.h"
using namespace std;

long long int gcd_recursive(long long int a, long long int b)
{
    if (b)
        return gcd_recursive(b, a % b);
    else
        return a;
}
int main()
{
int t;
cin>>t;
while (t--)
{
long long int n,m;
cin>>m>>n;
if(m==1 || n==1)
cout<<-1<<endl;
else
if(gcd_recursive(m,n)==1)
cout<<1<<endl;
else
cout<<0<<endl;

}
}
