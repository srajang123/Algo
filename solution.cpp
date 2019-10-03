#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=0,c=0,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        a+=k;
        cin>>k;
        b+=k;
        cin>>k;
        c+=k;
    }
    if(a==0 && b==0 && c==0)
        cout<<"YES";
    else
        cout<<"NO";
}
