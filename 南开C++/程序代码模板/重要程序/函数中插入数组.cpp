#include<iostream>
using namespace std;
void print(int,int[10]);
int main()
{
	int a[10],b[10];
	for(int i=0;i<=9;i++)
	{
		a[i]=i;
		b[i]=2*i;
	}
	print(3,a);
	print(4,b);
	return 0;
}
void print(int x,int a[10])
{
	cout<<a[2]<<endl;
}

