//Author: Shubham B. Rajput
//C++

#include<iostream>
using namespace std;

int main()
{
	int T;
	char a[3];
	cin>>T;
	int num[T];
	if(1<=T && T<=50)
	{
	
		for(int i=0;i<T;i++)
		{
			for(int j=0;j<3;j++)
			cin>>a[j];
			if(a[0]=='P' || a[1]=='P' || a[2]=='P')
			{
				if(a[0]=='C' || a[1]=='C' || a[2]=='C')
				{
					if(a[0]=='M' || a[1]=='M' || a[2]=='M')
					{
						num[i]=1;
					}	
				}
			}
			else
			num[i]=0;
		}
		for(int i=0;i<T;i++)
		{
			if(num[i]==1)
			cout<<"\nYES";
			else
			cout<<"\nNO";
		}
	}
}
