//ц╟ещеепР
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a[10];
	bool change;
	for(int i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=9;j++)
	{
		change=false;
		for(i=9;i>=j;i--)
		{
			if(a[i]>a[i-1])
			{
				swap(a[i],a[i-1]);
				change=true
			}
		}
		if(change==false) break;
	}
	for(i=0;i<=9;i++)
		cout<<a[i]<<"  ";
	return 0;
}
void swap(int& a,int& b)
{
	int t;
	t=a;
	a=b;
	b=t;
}


