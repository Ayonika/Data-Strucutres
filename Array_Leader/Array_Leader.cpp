#include <iostream>

using namespace std;

int
main ()
{
// Create an array
  int arr[20],n, i, j;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout << "Enter values in the array" << endl;
  for (i = 0; i < 5; i++)
    {
      cin >> arr[i];
    }
  for (i = 0; i < 5; i++)
    {
      cout << " " << arr[i];
    }
//Code with O(n2)
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (arr[j] > arr[i])
	    {
	      break;
	    }
	}
      if (j == n)
	{
	  cout << "\n" << arr[i] << " " << "is the leader" << endl;
	}
    }
  return 0;
}
