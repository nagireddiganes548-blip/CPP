#include<iostream>
using namespace std;
template <typename T>
void sort(T a[],int n)
{
	T temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"sorted array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
};
int main()
{
	int a[5]={6,69,34,56,3};
	char c[5]={'P','r','a','g','z'};
	float f[5]={3.7,14.7,98.2,33.2,85.3};
	sort (a,5);
	sort (c,5);
	sort (f,5);
	return 0;
}


