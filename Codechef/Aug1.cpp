#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	char a[3],b[3];
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	if(a[0]=='b'||b[0]=='b')
		{
			if(a[1]=='o'||b[1]=='o')
				{
					if(a[2]=='b'||b[2]=='b')
					cout<<"yes\n";
					else
					cout<<"no\n";
				}
			
			else if(a[1]=='b'||b[1]=='b')
				{		
					if(a[2]=='o'||b[2]=='o')
					cout<<"yes\n";
					else
					cout<<"no\n";
				}
			else
			cout<<"no\n";
		}
	else if(a[0]=='o'||b[0]=='o')
		{
			if(a[1]=='b'||b[1]=='b')
				{
					if(a[2]=='b'||b[2]=='b')
					cout<<"yes\n";
					else
					cout<<"no\n";
				}
			else 
			cout<<"no\n";
		}		
	else 
			cout<<"no\n";
	}
}