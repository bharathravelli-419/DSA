#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
  int i=0,j=n-1;
  int temp;
   while(i<j)
   {
       temp =arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;j--;

   }
for(int k =0;k<n;k++)
        cout<<arr[k]<<" ";
return 0;
}
/*
op:
4
34
56
78
90
90 78 56 34
*/
