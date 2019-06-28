#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool IsDivisible(int i)
 {
     return((i%4)==0);
 }
int main()
{
 int arr[7]={4,8,9,16,13,32,4132},i;
  int n=sizeof(arr)/sizeof(arr[0]);
 cout<<"Array:";
 for(i=0;i<n;i++)
 {
     cout<<" "<<arr[i];
 }
int new_value=4;
replace_if(arr,arr+n,IsDivisible,4);
cout<<"\nNew Array:";
 for(i=0;i<n;i++)
 {
     cout<<" "<<arr[i];
 }
    return 0;
}
