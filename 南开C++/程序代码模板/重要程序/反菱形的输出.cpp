#include<iostream>
using namespace std;
void main()
{
	for(int i=1;i<9;i++)
	{
		for(int j=i-1;j>0;j--)
			cout<<" ";
		for(int j=17-2*i;j>0;j--)
			cout<<"*";
		cout<<endl;
	}
	for(int i=7;i>0;i--)
	{
		for(int j=i-1;j>0;j--)
			cout<<" ";
		for(int j=17-2*i;j>0;j--)
			cout<<"*";
		cout<<endl;
	}
}