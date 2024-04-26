
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
         cin>>v[i];
  }
  sort(v.begin(),v.end());
  int tofind;
  cin>>tofind;
  int lo=0,hi=n-1;
  while(hi-lo>1)
  {
         int mid=(hi+lo)/2;
         if(v[mid]<tofind) lo=mid+1;
         else hi=mid;
  }
  if(v[lo]==tofind)cout<<lo<<endl;
  else if(v[hi]==tofind)cout<<hi<<endl;
  else cout<<"No Find"<<endl;

return 0;
}
