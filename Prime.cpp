#include<iostream>
using namespace std;
bool isprime(int);
int main()
{

    int n ;
    cin>>n;
    int i=0;
    bool x;
    while(i<=n)
    {
        x = isprime(i);
        if(x)
            cout<<i<<" ";
        i++;
    }

}
bool isprime(int n)
{
     bool x= false;
    if(n%2 ==0|| n%3 ==0|| n%5==0||n%7==0)
    {

        if(n==2|| n==3||n==5||n==7)
        {

            x =true;
        }
        else
        {

            x= false;
        }
    }
    else

    {

        x = true;
    }
   return x;
}
