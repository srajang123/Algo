#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool visited[1000];
vector<ll>q;
void bfs(ll s,vector<vector<ll>>a)
{
    visited[s]=true;
    q.push_back(s);
    ll f=0;
    while(f<q.size())
    {
        s=q[f];
        cout<<s<<" ";
        f++;
        for(int i=0;i<a[s].size();i++)
        {
            if(!visited[a[s][i]])
            {
                visited[a[s][i]]=true;
                q.push_back(a[s][i]);
            }
        }
    }
}
int main()
{
    memset(visited,false,sizeof(visited));
    ll i,j,k,e,v,s,x,y;
    cin>>e>>v>>s;
    vector<vector<ll>>g(e+1);
    for(i=0;i<v;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
    }
    bfs(s,g);
}