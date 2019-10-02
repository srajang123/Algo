//This is the solution for codeforces problem T-Primes

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,k,max=0,p,t,q,x=0;
    cin>>n;
    vector<ll>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        max=max>a[i]?max:a[i];
    }
    /*vector<bool>chk(max+1,true);
    for(i=2;i*i<=max;i++)
    {
        if(chk[i]==true)
        {
            for(j=i*i;j<=max;j+=i)
            {
                chk[j]=false;   
            }
        }
    }
    chk[1]=false;*/
    for(i=0;i<n;i++)
    {
        x=0;
        t=sqrt(a[i]);
        if(a[i]!=t*t)
            x=-1;
        if(t==1)
            x=-1;
        if(x==0)
        {
            for(q=2;q<=sqrt(t);q++)
            {
                if(t%q==0)
                {
                    x=-1;
                    break;
                }
            }
        }
        if(x==0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }
}