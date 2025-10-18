#include <iostream>  
using namespace std;
#include <vector>    
#include <algorithm> 
int main() 
{
int i;
vector<int> ivec;
for(i=1;i<=5;i++)
{
ivec.push_back(i); // input
}
vector<int>::iterator it;
for (it=ivec.begin();it != ivec.end();++it )
 {
 	cout << *it << " ";
}
cout <<endl;
ivec.insert(ivec.begin()+1,2,100);//insert two copies of 100 at second position
cout<<"After Inserting element in list"<<endl;
for ( it=ivec.begin();it != ivec.end();++it )
 	cout << *it << " ";
	return 0;
}

