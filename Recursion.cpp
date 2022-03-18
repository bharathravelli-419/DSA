#include<iostream>
using namespace std;

double e(int x,int n)
{
    static double s =1;
   if(n==0)
    return s;
   s = (s*x/n) + 1;
   return e(x,n-1);

}
int main()
{
double result = e(4,15);
cout<<result;


}
/*
op:
54.5979

*/
