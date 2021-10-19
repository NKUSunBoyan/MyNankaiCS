/*********************************
如下函数一定要用引用形参
用赋值形参对主函数变量的值没有影响
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
	
