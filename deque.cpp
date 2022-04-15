#include<deque>
#include<iostream>
#include<iterator>
/*
push_back()
pop_back()
push_front()
pop_front()
front()
back()
size()
empty()
emplace_back()
emplace_front()
clear()
swap()
[]--> indexing
insert()
at()
erase()
*/
using namespace std;
int main()
{
  deque<int> d;
  d.push_back(10);
  d.push_back(50);
  d.push_back(40);
  d.push_back(30);
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  deque<int> d1={111,222,333,444};
  deque<int> :: iterator it = d1.begin();
  cout<<"using iterator concept"<<endl;
  while(it !=d1.end())
  {
      cout<<*it<<" ";
      it++;
  }
  cout<<endl;
  cout<<"using the indexing method"<<endl;
  for(int i=0;i<d1.size();i++)
    cout<<d1[i]<<" ";
  cout<<endl<<"using the at method"<<endl;
  for(int i=0;i<d1.size();i++)
    cout<<d1.at(i)<<" ";

// inserting the element at certain position
  it = d1.begin();
  d1.insert(it+2,101);
  cout<<endl;
  cout<<"using the indexing method"<<endl;
  for(int i=0;i<d1.size();i++)
    cout<<d1[i]<<" ";
// we can also use the deque for temp for variation of insert
 int temp[3] ={1,2,3};
 d1.insert(it+2,temp,temp+3);
  cout<<endl;
  cout<<"using the indexing method"<<endl;
  for(int i=0;i<d1.size();i++)
    cout<<d1[i]<<" ";
//erase and clear

 d1.erase(it);
  cout<<endl;
  cout<<"using the indexing method"<<endl;
  for(int i=0;i<d1.size();i++)
    cout<<d1[i]<<" ";
d1.erase(it+3,it+5);
 cout<<endl;
  cout<<"using the indexing method"<<endl;
  for(int i=0;i<d1.size();i++)
    cout<<d1[i]<<" ";

//clear
 d1.clear();
 cout<<endl;
 cout<<d1.empty();
}
