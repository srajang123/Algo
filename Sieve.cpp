//Seive algorithm to find Prime Numbers
//Complexity: O(nlog(logn))
//Example prints prime from 1 to 100000
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
int main()
{
    bool prime[MAX+1];
    memset(prime,true,sizeof(prime));
    ll i,j,p,k;
    for(i=2;i*i<=MAX;i++)
    {
        if(prime[i])
        {
            for(j=i*i;j<=MAX;j+=i)
                prime[j]=false;
        }
    }
    for(i=2;i<MAX+1;i++)
    {
        if(prime[i])
            cout<<i<<"\n";
    }
}