#include<iostream>
#include<queue>
/*
push()
pop()
empty()
size()
swap()
emplace()
front()
back()
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
        cout<<a<<" "<<b<<endl<<endl;
    }
    void display()
    {

        cout<<a<<" "<<b<<endl;
    }
};
int main()
{

    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while( ! s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    cout<<endl<<endl<<endl;
    queue<A> a;
    a.emplace(100,200);
    a.emplace(1000,2000);
    while(! a.empty())
    {

        (a.front()).display();
        a.pop();
    }
   queue<int> s1;
   s1.push(11);
   s1.push(12);
   s1.push(122);
   s1.swap(s);
   while( ! s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
     cout<<endl<<endl<<endl;
         while( ! s1.empty())
    {
        cout<<s1.front()<<" ";
        s1.pop();
    }

}

