#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Segregate(int arr[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
            case 1:mid++;
            break;
            case 2:swap(arr[mid],arr[high]);
            high--;
            default:cout<<"";
        }
    }
    return 0;
}
void print(int arr[],int n)
{   int i;
    cout<<"\nArray after Segregation"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{  int n,i;
   cout<<"Size of Array:";
   cin>>n;
   int arr[n];
   cout<<"Add the inputs of the array:";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   Segregate(arr,n);
   print(arr,n);
  return 0;
}
