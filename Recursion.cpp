#include<iostream>
using namespace std;
int fun(int n)
{
     static int x =0;
if(n>0)
{
    x++;
  return fun(n-1);
}
else
{
  return 0;
}
}
int main()
{


    int r = fun(5);
    cout<<r;
    r= fun(5);
    cout<<endl;
    cout<<r;
}
