#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
	long long k=0;
	int i,j,num,t;
	for(i=0;i<35;i++)
	      for(j=0;j<35;j++)
	      if(i!=j)
	           a[k++]=pow(2,i)+pow(2,j);
sort(a,a+k);    
	           
cin>>t;
	 	 while(t--)
	 {	
	 	k=0;
	 	cin>>num;
	 	if(num==0)
	 		cout<<"2\n"
	 	while(num>a[k])
	 	k++;
	 	int c1=fabs(num-a[k]);
	 	int c2=fabs(num-a[k+1]);
	 	if(c1<c2)
	 	cout<<c1<<endl;
	 	else 
	 	cout<<c2<<endl;
	 }
} 