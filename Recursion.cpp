#include<iostream>
using namespace std;

void funB(int );
void funA(int n)
{

    if(n>0)
    {

        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n)
{

    if(n>1){
        cout<<n<<endl;
        funA(n/2);
    }
}
int main()
{


    funA(20);

}
/*
op:
20
19
9
8
4
3
1

*/
