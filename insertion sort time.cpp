#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>v)
{
     for(int i=1;i<v.size();i++)
     {
            int item=v[i];
            int j=i-1;
            while(j>=0 && v[j]>item)
            {
                   v[j+1]=v[j];
                   j--;
            }
            v[j+1]=item;
     }
     for(int i=0;i<v.size();i++)
     {
            cout<<v[i]<<endl;
     }

}
int main()
{
       int t,n;
       cin>>t;
       vector<int>v;
       for(int i=0;i<t;i++)
       {
          cin>>n;
          v.push_back(n);
       }
       insertion_sort(v);
}
