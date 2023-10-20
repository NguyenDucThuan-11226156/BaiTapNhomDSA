#include<bits/stdc++.h>
using namespace std;

bool visited[1005];
int adj[1005][1005];
int n;

void bfs(int n, int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int x = 1; x <= n; x++)
        {
            if (adj[v][x] == 1 && !visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adj[i][j];
        }
    }
}

int main()
{
    input();
    memset(visited, false, sizeof(visited));
    bfs(n, 1);

    return 0;
}
