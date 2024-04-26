#include<stdio.h>
#define size 7
int arr[size];
void marge_sort(int start,int end)
{
    int mid,i;
    if(start<end)
    {
       mid=(start+end)/2;
       marge_sort(start,mid);
       marge_sort(mid+1,end);
       marge(start,mid,end);

    }



}
void marge(int start,int mid,int end)
{
       int temp[size];
       int i=start,j=mid+1,k=start;
       while(i<=mid&&j<=end)
       {

              if(arr[i]<=arr[j])
              {
                    temp[k++]=arr[i++];
              }
              else
              {
                     temp[k++]=arr[j++];
              }
       }
       while(i<=mid)
       {
              temp[k++]=arr[i++];
       }
       while(j<=end)
       {
              temp[k++]=arr[j++];
       }
       for(i=start;i<=end;i++)
       {
              arr[i]=temp[i];
       }
}
int main()
{

  int i;
  for(i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);

  }
  marge_sort(0,size-1);
   for(i=0;i<size;i++)
   {
          printf("%d,",arr[i]);
   }


  return 0;
}

