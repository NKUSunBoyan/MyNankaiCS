#include<iostream>
#include<stdlib.h>
using namespace std;
void main()
{
	srand(0);
	int a[10];
	for(int i=0;i<10;i++)
		a[i]=rand()%1000;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		int max=a[i];
		for(int j=i+1;j<10;j++)
		{
			if(a[j]>max)
				max=a[j];
		}
	}
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}