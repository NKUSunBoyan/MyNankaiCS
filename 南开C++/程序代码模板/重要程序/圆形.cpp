#include<iostream>
using namespace std;
void main()
{
	char cir[25][50];
	int x,y;
	for(x=0;x<25;x++)
		for(y=0;y<50;y++)
			cir[x][y]=' ';
	for(x=0;x<25;x++)
	{
		for(y=0;y<50;y++)
		{
			if(((x-12)*(x-12)+(y-12)*(y-12))>137&&((y-12)*(y-12)+(x-12)*(x-12)<150))
				cir[x][2*y]='*';
		}
	}
	for(x=0;x<25;x++)
	{
		for(y=0;y<50;y++)
			cout<<cir[x][y];
		cout<<endl;
	}
}