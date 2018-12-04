#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,num,x,y,c1,c2,num1;
	cin>>t;
	while(t--){
		cin>>num;
		num1=num;
		x=y=0;
		while(pow(2,x)<=num)
			x++;
			x--;
		num=num-pow(2,x);
		while(pow(2,y)<=num)
			y++;
		if(y>0)
			y--;
		int c1=fabs(num1-(pow(2,x)+pow(2,y)));
		int c2=fabs(pow(2,x)+pow(2,y+1)-num1);
		if(c1<c2)
		cout<<c1<<endl;
else
	cout<<c2<<endl;
}	
}