#include<bits/.stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll ss=1;ss<=t;ss++)
    {
        string s;
        cin>>s;
        ll a=0,b=0;
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]=='B')   b++;
            else a++;
        }
        a/=2;
        cout<"Case #"<<ss<<": ";
        if(b>=a)
            cout<<"Y";
        else
        {
                cout<<"N";
        }
        cout<<"\n";
    }
}