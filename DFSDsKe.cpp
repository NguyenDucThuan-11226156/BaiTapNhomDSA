#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int n,m,k;

bool visited[1005];
int a[1005][1005];
vector<int> adj[100001];

void dfs(int u)
{
    cout<<u<<" ";
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}
int main()
{   
    cout<<"Nhập số đỉnh của đồ thị";
    cin>>n;
    cout<<"Nhập số cạnh của đồ thị";
    cin>>m;
    cout<<"Nhập đỉnh bắt đầu duyệt";
    cin>>k;
    for(int i = 1 ; i<=m;i++)
    {
        int x,y;cin>>x>>y;
        adj[y].push_back(x);
        adj[x].push_back(y);
    }
    for(int i = 1 ; i<=n;i++)
    {
        sort(adj[i].begin(),adj[i].end());// dam bao se duyet dinh nao co so be hon;
    }

    memset(visited,false,sizeof(visited));
    cout<<"Trình tự duyệt theo chiều sâu";
    dfs(k);
}

