#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool IsOdd(int i)
{
    return((i%2)== 1);
}
int main()
{
int arr[10]={1,2,4,3,5,6,7,8,9,10},i;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Array:";
for(i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}
int new_val=0;
replace_if(arr,arr+n,IsOdd,new_val);
cout<<"\nArray with Odd elements replaced:";
for(i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}
return 0;
}
