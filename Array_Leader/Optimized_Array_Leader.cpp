#include <iostream>

using namespace std;

int main()
{
  int arr[20],n,i,j;
  cout<<"Enter the size of the array"<<endl;
  cin>>n;
  cout<<"Enter the elements of the array"<<endl;
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
//   for(i=0;i<n;i++)
//   {
//       cin>>arr[i];
//   }
  int mfr=arr[i-1];
  for(i=n-2;i>=0;i--)
  {
      if(arr[i]>mfr)
      {
          cout<<arr[i]<<" "<<"is the leader"<<endl;
      }
      arr[i]=mfr;
  }
  return 0;
}
