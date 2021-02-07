//Author: Shubham B. Rajput
//C++

#include<iostream>
using namespace std;

int main()
{
	int T,n;
	cin>>T;
	cin>>n;
	int res[T];
	string cmd[n];
	if(1<=T && T<=100)
	{
		for(int j=0;j<T;j++)
		{
			cout<<"Enter command";	
			if(1<=n && n<=10)
			{
				for(int i=0;i<n;i++)
				{
					cin>>cmd[i];
					if(cmd[0]=="stop")
					{
						res[j]=1;
					}
				}
				for(int i=0;i<n;i++)
				{
					if(cmd[i]=="stop" && cmd[i+1]=="stop")
					{
						res[j]=1;
					}
				}
				for(int k=0;res[k]<T;k++)
				{
					if(res[k]==1)
					cout<<"404";
					else
					cout<<"200";
				}
			}
		}
	}
}

