#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll i,j,n;
    set<ll>factor;
    cin>>n;
    while(n%2==0)
    {
        factor.insert(2);
        n/=2;
    }
    for(i=3;i<=n;i+=2)
    {
        while(n%i==0)
        {
            factor.insert(i);
            n/=i;
        }
    }
    set<ll>:: iterator x;
    for(x=factor.begin();x!=factor.end();++x)
    {
        cout<<*x<<" ";
    }
}