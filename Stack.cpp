#include<iostream>
#include<stack>
/*
push()
pop()
empty()
size()
swap()
emplace()
top()
*/
using namespace std;
class A
{
private:
    int a;
    int b;
public:
    A(int n,int m )
    {
        a= n;
        b = m;
        cout<<"inside the constructor"<<endl;
    }
    void display()
    {

        cout<<a<<" "<<b<<endl;
    }
};
int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while( ! s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<endl<<endl;
    stack<A> a;
    a.emplace(100,200);
    a.emplace(1000,2000);
    while(! s.empty())
    {


        s.pop();
    }
   stack<int> s1;
   s1.push(11);
   s1.push(12);
   s1.push(122);
   s1.swap(s);
   while( ! s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
     cout<<endl<<endl<<endl;
         while( ! s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

}

