#include<iostream>
using namespace std;

int ncr(int n,int r)
{
    if(n==r || r==0)
        return 1;
    else
        return ncr(n-1,r-1)+ncr(n-1,r);

}
int main()
{
int result = ncr(4,2);
cout<<result;


}
/*
op:
6

*/
