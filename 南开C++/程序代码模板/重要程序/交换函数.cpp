/*********************************
���º���һ��Ҫ�������β�
�ø�ֵ�βζ�������������ֵû��Ӱ��
*********************************/
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a=1,b=2;
	swap(a,b);
	cout<<a<<b;
	return 0;
}
void swap(int& a,int& b)
{
	int t;
	t=a;
	a=b;
	b=t;
	return;
}
	
