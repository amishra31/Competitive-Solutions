#include<iostream>
using namespace std;
struct Subtask{
	int score;
	int num_solvers;
	}st[2];
long long diff[100000];
int main()
{
int n,s,i,j,k,pos,small;
cin>>n>>s;
Subtask temp1;
n=t;
while(t--)
	{
	diff[i]=0;
	for(j=1;j<=s;j++)
	cin>>st[j].score;
	for(j=1;j<=s;j++)
	cin>>st[j].num_solvers;
	for(j=1;j<=n;j++){
	for(k=1;k<=n-1-j;k++)
	{	if(st[k].score>=st[k+1].score)
		{
			temp1=st[k];
			st[k]=st[k+1];
			st[k+1]=temp1;
		}
	}}
	for(j=1;j<s;j++)
	if(st[j].num_solvers>st[j+1].num_solvers)
	  diff[i]++;
	}
for(i=1;i<=n;i++)
{
	small=diff[1];
	for(j=1; j<=n ;j++)
   	{
    if(small >= diff[j])
     {
       small= diff[j];
       pos = j;
	 } 
	}
	 diff[pos]=999;
	 cout<<pos<<endl;
}
}