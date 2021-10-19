#include<iostream.h>
void main()
{
	int i,j,k;
	for(i=1;i<=15;i++)
	{ for(j=1;j<=15-i;j++)
	   cout<<" ";
	  for(k=1;k<=2*i-1;k++)
	   cout<<"A";
	  cout<<endl;}
}