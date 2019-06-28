#include<iostream>
//include<stdlib.h>
#include<stdio.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int x)
{
    if(high>=low)
    {
       int mid=(low+high-1)/2;
    if(arr[mid]== x)
    {
    cout<<"Element"<<x<<"is found at"<<arr[mid];
    }
    if(arr[mid]>x)
    {
        return binarySearch(arr,low,mid-1,x);
    }
    if(arr[mid]<x)
    {
       return binarySearch(arr,mid+1,high,x);
    }
    }
    return -1;
}
int main()
{
int arr[10],n,i,x;
cout<<"Size of Array:";
cin>>n;
cout<<"Inputs";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Array Formed";
for(i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}
cout<<"\nWhich element do you want to search";
cin>>x;
 int result=binarySearch(arr,0,n-1,x);
 if(result== -1)
 {
     cout<<"Element is not present";
 }
else
{

    cout<<x<<"is found";
}
return 0;
}
