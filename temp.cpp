#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {

  int arr[m+n]={INT_MIN};
        sort(a,a+n);
        sort(b,b+m);
        int i=0;
        int j =0;
        int k=0;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                arr[k++]=a[i];
                i++;
                j++;
            }
            else if(a[i]<b[j])
            {
                 arr[k++]=a[i];
                i++;
            }
            else
            {
             arr[k++]=b[j];
                 j++;
            }
        }
        while(i<n)
        {
            arr[k++]=a[i];
            i++;
        }
        while(j<m)
        {
            arr[k++]=b[j];
            j++;
        }
       int count1 =0;
        for(int i=0;i<(m+n)-1;i++)
        {
            if(arr[i+1]!=arr[i] && arr[i]!=INT_MIN)
            {
                count1++;
            }
             if(arr[m+n -1]!= arr[m+n -2])
               count1++;
        }
        return count1;
    }

int main()
{

    int a[5]={4,3,6,2,1};
    int b[3]={4,3,1};
    int count1 = doUnion(a,5,b,3);
    cout<<count1<<endl;
}
