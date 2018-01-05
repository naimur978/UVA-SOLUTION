#include <bits/stdc++.h>
#define pb push_back
#define mx 200
using namespace std;

vector<int>adj[mx];
bool color[mx],vis[mx];


int bfs( int src)
{
    queue<int>q;


    q.push(src);

    while(!q.empty())
        {
        int u = q.front();
        q.pop();
    
        for(int i=0;i<adj[u].size();i++)
            {
                int v = adj[u][i];

                if(vis[v]==false) {
                    color[v] = !color[u];
                    vis[v] = true;
                    q.push(v);
                }
                else if(color[u]==color[v]){printf("NOT ");return 0;}
            }
    }
return 0;
}

int main ()
{
   //freopen("abc.txt","r",stdin);
	int n, e, i, u, v;
        while(scanf("%d",&n)&&n!=0)
        {
            scanf("%d",&e);

            for(int i=0;i<n;i++)
            {
                vis[i]=false;
                color[i]=false;
            }

		for(i = 0; i < e; i++) {
			scanf("%d %d",&u,&v);
			adj[u].pb(v);
            adj[v].pb(u);
		}
        bfs(0);
        printf("BICOLORABLE.\n");

        for(i = 0; i < n; i++)
            adj[i].clear();

        }

	return 0;
}
