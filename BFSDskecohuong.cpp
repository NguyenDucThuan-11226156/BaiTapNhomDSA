#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool visited[1005];

vector<int>adj[1005];
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        for(int x:adj[v])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x]= true;
            }
        }
    }
}
int main()
{
    int n,m,k;cin>>n>>m>>k;
    for(int i =1 ; i <=m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i =1 ; i <=n;i++)
    {
        sort(adj[i].begin(),adj[i].end());
    }
    memset(visited,false,sizeof(visited));
    bfs(k);

}