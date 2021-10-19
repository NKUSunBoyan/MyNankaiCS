#include<iostream>
using namespace std;
void main()
{
	/*char c;
    for(int i=1;i<=5;i++)
	{
		c='E'-i+1;
		for(int j=i-1;j>0;j--)
			cout<<" ";
u		for(int k=6-i;k>0;k--)
		{
			cout<<c;
			c--;}
		for(int j=1;j<=5-i;j++)
		{
			cout<<char(c+2);
			c++;
		}
		cout<<endl;
	}*/
char c;
    for(int i=1;i<=5;i++)
	{
		c='E'-i+1;
		for(int j=1;j<=i-1;j++)
			cout<<" ";
		for(int k=1;k<=6-i;k++)
		{
			cout<<c;
			c--;}
		for(int j=1;j<=5-i;j++)
		{
			cout<<char(c+2);
			c++;
		}
		cout<<endl;
	}}