#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int num[]={0,0,0,0,0,0,0,0};
    int n=8;
    memset(num,-1,sizeof(num));
    for(int i=0;i<n;i++)
    {
        cout<<" "<<num[i];
    }
    return 0;
}
