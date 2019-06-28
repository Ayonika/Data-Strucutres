#include <bits/stdc++.h>
//#include<stdlib.h>
using namespace std;
int main()
{
    int n,i,max1,max2;
    //int arr[n];
   // system("CLS");
    cout<<"The size of Array";
    cin>>n;
    int arr[n];
    cout<<"Elements of the Array";
    for(i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
      max1=arr[0];
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    cout<<"The Greatest Element in the array is"<<" "<<max1<<endl;
     //temp=max;
     //max=arr[n-1];
     //arr[n-1]=temp;
      //cout<<"Sorted Array is"<<" "<<flush;
      //max1=arr[0];
     int old_val=max1;
     int new_val=0;

     replace(arr,arr + n,old_val,new_val);
cout<<"\n";
     for(i=0;i<n-1;i++)
     {
         cout<<arr[i];
     }
     max2=arr[0];

     for(i=0;i<n-1;i++)
     {
        if(arr[i]>max2)
        {
            max2=arr[i];
        }
     }
     cout<<"\nNext Largest Element"<<" "<<max2;
    return 0;
}


