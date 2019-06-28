# include <iostream>
using namespace std;
int Segregate(int arr[],int n)
{
    //Count the number of Zeroes
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count+=1;
        }
    }
    //Print the zeroes in the array till the number of zeroes are there
    for(int i=0;i<count;i++)
    {
        arr[i]=0;
    }
    //Print the ones in the array after the zeroes have been settled
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
    }
    return 0;

}
void print(int arr[],int n)
{
    cout<<"The segregated Array is"<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
 //Array Construction
int i,n,arr[20],count=0;
 cout<<"Enter the size of the array"<<endl;
 cin>>n;
  cout<<"Add 0's and 1's in the array"<<endl;
 for(i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 Segregate(arr,n);
 print(arr,n);
return 0;
}
