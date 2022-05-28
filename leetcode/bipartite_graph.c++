#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);//
    vector<bool> vis(n, false);// to get which node is or not 
    vector<int> col(n, -1);//intial all colour set to 0
    bool bip_lol=true;

void color(int u,int curr)
{
if(col[u]!=-1 and col[u]!=curr)
{
    bip_lol = false;
    return;
}
col[u] = curr; //apna colour de diya
if(vis[u])
    return;// visited mark kri
vis[u] = true;//usko true kr
for(auto i:adj[u])
{
    color(i, curr xor 1);
}
}
}
