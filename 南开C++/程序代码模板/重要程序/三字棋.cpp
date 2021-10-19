#include<iostream>
using namespace std;
enum pos{blank,com,player};
int value(int x,int y,pos m,pos a[3][3])
{
	a[x][y]=m;
	int val=0;
	pos n;
	if(m==com) n=player;
	else n=com;
	if(a[0][0]!=n && a[0][1]!=n && a[0][2]!=n) val++;
	if(a[1][0]!=n && a[1][1]!=n && a[1][2]!=n) val++;
	if(a[2][0]!=n && a[2][1]!=n && a[2][2]!=n) val++;
	if(a[0][0]!=n && a[1][0]!=n && a[2][0]!=n) val++;
	if(a[0][1]!=n && a[1][1]!=n && a[2][1]!=n) val++;
	if(a[0][2]!=n && a[1][2]!=n && a[2][2]!=n) val++;
	if(a[0][0]!=n && a[1][1]!=n && a[2][2]!=n) val++;
	if(a[0][2]!=n && a[1][1]!=n && a[2][0]!=n) val++;

	if(a[0][0]!=m && a[0][1]!=m && a[0][2]!=m) val--;
	if(a[1][0]!=m && a[1][1]!=m && a[1][2]!=m) val--;
	if(a[2][0]!=m && a[2][1]!=n && a[2][2]!=m) val--;
	if(a[0][0]!=m && a[1][0]!=m && a[2][0]!=m) val--;
	if(a[0][1]!=m && a[1][1]!=m && a[2][1]!=m) val--;
	if(a[0][2]!=m && a[1][2]!=m && a[2][2]!=m) val--;
	if(a[0][0]!=m && a[1][1]!=m && a[2][2]!=m) val--;
	if(a[0][2]!=m && a[1][1]!=m && a[2][0]!=m) val--;
	
	if(a[0][0]==m && a[0][1]==m && a[0][2]==m) val+=100;
	if(a[1][0]==m && a[1][1]==m && a[1][2]==m) val+=100;
	if(a[2][0]==m && a[2][1]==n && a[2][2]==m) val+=100;
	if(a[0][0]==m && a[1][0]==m && a[2][0]==m) val+=100;
	if(a[0][1]==m && a[1][1]==m && a[2][1]==m) val+=100;
	if(a[0][2]==m && a[1][2]==m && a[2][2]==m) val+=100;
	if(a[0][0]==m && a[1][1]==m && a[2][2]==m) val+=100;
	if(a[0][2]==m && a[1][1]==m && a[2][0]==m) val+=100;

	a[x][y]=blank;
	return val;
}
void printboard(pos a[3][3])
{
	for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++)
			{
				if(a[i][j]==blank) cout<<'.';
				if(a[i][j]==com) cout<<'*';
				if(a[i][j]==player) cout<<'o';
			}
			cout<<endl;
	}
}
bool win(pos m,pos a[3][3])
{
	bool w=false;
	pos n;
	if(m==com) n=player;
	else n=com;
	if(a[0][0]==m && a[0][1]==m && a[0][2]==m) w=true;
	if(a[1][0]==m && a[1][1]==m && a[1][2]==m) w=true;
	if(a[2][0]==m && a[2][1]==m && a[2][2]==m) w=true;
	if(a[0][0]==m && a[1][0]==m && a[2][0]==m) w=true;
	if(a[0][1]==m && a[1][1]==m && a[2][1]==m) w=true;
	if(a[0][2]==m && a[1][2]==m && a[2][2]==m) w=true;
	if(a[0][0]==m && a[1][1]==m && a[2][2]==m) w=true;
	if(a[0][2]==m && a[1][1]==m && a[2][0]==m) w=true;
	return w;
}

int main()
{
	int b[3][3],c[3][3],min,max,maxval[3][3],x,y;
	pos a[3][3];
	for(int j=0;j<=2;j++)
	{
		for(int k=0;k<=2;k++)
		{
			a[j][k]=blank;
		}
	}
	for(j=0;j<=2;j++)
	{
		for(int k=0;k<=2;k++)
		{
			c[j][k]=10000;
			b[j][k]=-10000;
		}
	}	
	for(int i=1; ;i++)
	{
		max=-10000;
		min=10000;
		for(int j=0;j<=2;j++)
		{
			for(int k=0;k<=2;k++)
			{
				if(a[j][k]!=blank)
					b[j][k]=-20000;
				if(a[j][k]==blank)
				{
					b[j][k]=value(j,k,com,a);
					if(b[j][k]>max)
						max=b[j][k];
				}
			}
		}
		for(j=0;j<=2;j++)
		{
			for(int k=0;k<=2;k++)
			{
				maxval[j][k]=-10000;
				if(b[j][k]==max)
				{
					a[j][k]=com;
					for(int m=0;j<=2;j++)
					{
						for(int n=0;k<=2;k++)
						{
							if(a[m][n]==blank)
							{
								c[m][n]=value(m,n,player,a);
								if(c[m][n]>maxval[j][k])
									maxval[j][k]=c[m][n];
							}
						}
					}
					a[j][k]=blank;
				}
				if(maxval[j][k]<min)
					min=maxval[j][k];
			}
		}
		for(j=0;j<=2;j++)
		{
			for(int k=0;k<=2;k++)
			{
				if(maxval[j][k]==min && b[j][k]==max)
				{
					a[j][k]=com;
					cout<<"my postion=>"<<j<<k<<endl;
					break;
					break;
				}
			}
		}
			
		printboard(a);
		if(win(com,a))
		{
			cout<<"i win!"; 
			break;
		}
		cout<<"your position(x,y)?";
		cin>>x>>y;
		a[x][y]=player;
		printboard(a);
		if(win(player,a))
		{
			cout<<"you win!";
			break;
		}
	}
	return 0;
}
