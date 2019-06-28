#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}*/
void BubbleSort(int arr[],int n)
{
     for(int pass=0;pass<n;pass++)
    {
      for(int i=0;i<n-pass-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            //swap(arr[i],arr[i+1]);
            swap(arr[i],arr[i+1]);
        }
    }
    }
}
void print(int arr[],int n)
{   cout<<"\nSorted Array is:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arr[5]={2,1,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    BubbleSort(arr,n);
    print(arr,n);

    return 0;
}
