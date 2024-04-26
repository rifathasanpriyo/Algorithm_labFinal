#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e3+10;
vector<pair<ll,ll>>graph_list[N];
int main()
{
  ll n,m;
  cin>>n>>m;
  for(ll i=0;i<m;i++)
  {
         ll v1,v2,wt;
         cin>>v1>>v2>>wt;
         graph_list[v1].push_back({v2,wt});
         graph_list[v2].push_back({v1,wt});
  }
    for(ll i=1; i<=n; i++)
    {
        cout << "Adjacency list of vertex " << i << ": ";
        for(auto& edge : graph_list[i])
        {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << endl;
    }

return 0;
}
