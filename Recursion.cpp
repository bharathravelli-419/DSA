#include<iostream>
using namespace std;
int x=0;
void fun(int n)
{
  x++;
if(n>0)
{

cout<<n<<endl;
   fun(n-1);
   fun(n-1);

}


}
int main()
{


    fun(3);
    cout<<"the count of recursive calls is :"<<x;
}
