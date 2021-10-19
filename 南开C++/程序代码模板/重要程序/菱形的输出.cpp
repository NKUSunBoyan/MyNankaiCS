#include<iostream>
using namespace std;
void main()
{
	for(int i=1;i<10;i++)
	{
		for(int j=9-i;j>0;j--)
			cout<<" ";
		for(int k=2*i-1;k>0;k--)
			cout<<"*";
		cout<<endl;
	}
	for(int i=8;i>0;i--)
	{   for(int j=9-i;j>0;j--)
			cout<<" ";
		for(int k=2*i-1;k>0;k--)
			cout<<"*";
		cout<<endl;
	}
}