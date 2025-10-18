#include <iostream>
using namespace std;
#include <deque>
int main()
{
deque<int> deq;
cout<<"push_front() and push_back\n";
    for(int i=1; i<=5; ++i)
    {
 deq.push_front(i);// insert the elements each at the front
 deq.push_back(i*5);// insert the elements each at the end
}
deque <int>::iterator d;
d=deq.begin();
  ++d;                          
  deq.insert (d,1,34); 
  for(d=deq.begin(); d!=deq.end();d++)
        cout<<*d<<" ";
  deq.pop_front();// delete the elements from the front
 deq.pop_back();// delete the elements  from the end
  for(d=deq.begin(); d!=deq.end();d++)
        cout<<*d<<" ";
        cout<<endl;
    }

