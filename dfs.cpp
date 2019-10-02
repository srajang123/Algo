#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000
vector<ll>s;
bool visited[MAX+1];
void dfs(int u,vector<vector<ll>>graph)
{
    visited[u]=true;
    for(ll i=0;i<graph[u].size();i++)
    {
        if(!visited[graph[u][i]])
        {
            s.push_back(graph[u][i]);
            dfs(graph[u][i],graph);
        }
    }
}
int main()
{
    memset(visited,false,sizeof(visited));
    ll i,j,k,e,v,p,q,start;
    vector<ll>a;
    cin>>e;
    cin>>v;
    cin>>start;
    vector<vector<ll>>graph(e);
    for(i=0;i<v;i++)
    {
        cin>>p>>q;
        graph[p].push_back(q);
    }
    s.push_back(start);
    dfs(start,graph);
    i=0;
    while(s.size()>i)
    {
        cout<<"|"<<s[i++]<<"\n";
    }
}