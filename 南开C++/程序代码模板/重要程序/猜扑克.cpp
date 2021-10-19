//猜扑克牌
#include<iostream>
#include<string>
using namespace std;
void printcards(string a[],string b[],string c[])
{
	int i;
	cout<<"line1:";
	for(i=0;i<=9;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	cout<<"line1:";
	for(i=0;i<=9;i++)
		cout<<b[i]<<"  ";
	cout<<endl;
	cout<<"line1:";
	for(i=0;i<=9;i++)
		cout<<c[i]<<"  ";
	cout<<endl;
}
void swap(string& a,string& b)
{
	string temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a=5,b=5,c=5;
	string card1[9]={"c9","d3","a7","d9","a9","c3","b8","aA","d7"};
	string card2[9]={"b10","aQ","d6","b4","a3","b9","bK","cA","d8"};
	string card3[9]={"KING2","dA","bA","a4","d2","b7","d5","c7","a8"};
	printcards(card1,card2,card3);
	while(a<=0 || a>3)
	{
		cout<<"你看到的牌在第几行？";
		cin>>a;
	}
	switch(a)
	{
	case 1:
		{
			swap(card2[1],card1[4]);
			swap(card2[2],card1[5]);
			swap(card2[3],card1[6]);
			swap(card3[1],card1[7]);
			swap(card3[2],card1[8]);
			swap(card3[3],card1[9]);
		}
		break;
	case 2:
		{
			swap(card2[4],card1[1]);
			swap(card2[5],card1[2]);
			swap(card2[6],card1[3]);
			swap(card3[1],card2[7]);
			swap(card3[2],card2[8]);
			swap(card3[3],card2[9]);
		}
		break;
	case 3:
		{
			swap(card2[1],card3[4]);
			swap(card2[2],card3[5]);
			swap(card2[3],card3[6]);
			swap(card3[7],card1[1]);
			swap(card3[8],card1[2]);
			swap(card3[9],card1[3]);
		}
		break;
	}
	printcards(card1,card2,card3);
	while(b<=0 || b>3)
	{
		cout<<"你看到的牌在第几行？";
		cin>>b;
	}
	switch(b)
	{
	case 1:
		{
			swap(card1[2],card2[1]);
			swap(card1[3],card3[1]);
		}
		break;
	case 2:
		{
			swap(card2[2],card1[1]);
			swap(card2[3],card3[1]);
		}
		break;
	case 3:
		{
			swap(card3[2],card2[1]);
			swap(card3[3],card1[1]);
		}
		break;
	}
	printcards(card1,card2,card3);
	while(c<=0 || c>3)
	{
		cout<<"你看到的牌在第几行？";
		cin>>c;
	}
	switch(c)
	{
	case 1: cout<<card1[1]; break;
	case 2: cout<<card2[1]; break;
	case 3: cout<<card3[1]; break;
	}
	return 0;
}







	
	





