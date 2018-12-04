#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a,b,k,c,d,e,f ;
	cin>>t;
	while(t--)
	{
	cin>>a>>b>>n;
	c=pow(a,n);
	d=pow(b,n);
	e=fabs(a-b); 
	f=pow(10,9)+7;
	d=d+c;
	long long int k=__gcd(d,e)%f; 
	cout<<k<<endl;
}}