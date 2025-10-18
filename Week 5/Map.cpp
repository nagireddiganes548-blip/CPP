#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    // type of the collection
    map<int, string> mp;
  // set container for int/string values insert some elements in arbitrary order
    mp.insert(make_pair(2805,"JAMES"));
    mp.insert(make_pair(2802,"SMITH"));
    mp.insert(make_pair(2801,"SCOTT"));
    mp.insert(make_pair(2807,"MILLER"));
    mp.insert(make_pair(2804,"JOY"));
    mp.insert(make_pair(2806,"JOHN"));
    mp.insert(make_pair(2801,"SAM"));
    mp.insert(make_pair(2803,"BOB"));
    // iterate over all elements and print, element member second is the value
    map<int, string>::iterator pos;
    cout<<"EMPID"<<"\t"<<"NAME"<<endl;
    for(pos = mp.begin(); pos != mp.end(); ++pos)
    cout<<pos->first<<" "<<pos->second<<endl;
    pos=mp.find(2803);       //finding element at key 2803
    cout<<"Value at key 2803 is"<<pos->second<<endl;
    mp.erase(2805);              //deleting value at key position 2805
     cout<<"map after deletion"<<endl;
    for(pos = mp.begin(); pos != mp.end(); ++pos)
  cout<<pos->first<<" "<<pos->second<<endl;
  return 0;
}

