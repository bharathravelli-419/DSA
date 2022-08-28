#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printF(int ind,vector<int>ds,int arr[], int n)
{
    if(ind == n)
    {
        for(auto x:ds)
        {
            cout<<x<< " ";
        }
        if(ds.size() ==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();
    printF(ind+1,ds,arr,n);

    //if Backtracking needed
    /*
    printF(ind+1,ds,arr,n);
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();
    */

}
int main()
{
  int arr[3]={3,1,2};
  vector<int> ds;
  printF(0,ds,arr,3);

}

/*
op:

3 2 1
3 2
3 1
3
2 1
2
1
{}

*/
