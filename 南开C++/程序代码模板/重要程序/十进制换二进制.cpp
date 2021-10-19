//十进制换二进制
#include<iostream>
#include<string>
using namespace std;
int main()
{
	 int i,num_10,num_2[20];
	 cin>>num_10;
	 i=0;
	 while(num_10!=0)
	 {
		 num_2[i]=num_10%2;
		 num_10/=2;
		 i++;
	 }
	 for(;i>=1;i--)
	 {
		 cout<<num_2[i-1];
	 }
	 cout<<endl;
	 return 0;
}
		 