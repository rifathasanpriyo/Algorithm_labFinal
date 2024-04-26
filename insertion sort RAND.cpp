#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main()
{

   ofstream write,sorting;
   write.open("randomNumber.txt");
   clock_t endtime,startime;


  long long int n,r,temp;
   cin>>n;
   for(int i=0;i<=n;i++)
   {
       r=rand()% INT_MAX;
       write<<r<<endl;

   }
   ifstream read;
   read.open("randomNumber.txt");
   vector<int>v;
   while(read>>temp)
   {
       v.push_back(temp);

   }


   sorting.open("sorting.txt");
   startime=clock();

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
            sorting<<v[i]<<endl;
     }

endtime=clock();
double totaltime=((double)(endtime-startime))/CLOCKS_PER_SEC;
cout<<"Running Time = "<<totaltime;


    write.close();
    read.close();
    sorting.close();

}
