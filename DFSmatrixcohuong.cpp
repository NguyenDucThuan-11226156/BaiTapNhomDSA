#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i =a;i<=b;i++)
#define DREP(i,a,b) for(int i =a;i>=b;i--)
#define all(x) x.begin(),x.end();
#define REPMAT(i,j,m,n) for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)
using ll = long long ;

int n;
int matrix[1005][1005];
bool visited[1005];
void input()
{
    cin>>n;
    for(int i =1 ;i<=n;i++)
    {
        for(int j =1 ;j<=n;j++)
        {
            cin>>matrix[i][j];
        }
    }

}
void dfs(int u)
{
    cout<<u<<" ";
    visited[u]= true;
    for(int j = 1; j<=n;j++)
    {
        if(!visited[j] && matrix[u][j] == 1)
        {
            dfs(j);
        }
    }
}
int main()
{
    input();
    dfs(1);


}