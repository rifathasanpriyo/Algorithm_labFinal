#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
vector<int>g[N];
bool vis[N];
void dfs(int vertex){
       cout<<vertex<<endl;
     vis[vertex]=true;
     for(auto child : g[vertex])
     {
            cout<<"par "<<vertex<<" child "<<child<<endl;
            if(vis[child])continue;
            dfs(child);
     }
}
int main()
{
  int v,e;
  cin>>v>>e;
  while(e--)
  {
       int v1,v2;
       cin>>v1>>v2;
       g[v1].push_back(v2);
       g[v2].push_back(v1);
  }
  dfs(v);

return 0;
}
