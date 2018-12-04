#include<iostream>
#include<algorithm>	
#include <bits/stdc++.h>
using namespace std;
struct problem1
{
	int score;
	int solvers;

}st[40];

int main()
{		pair <int c, int index> counter[100000];


	int p,s,i,j,index,c;
	cin>>p>>s;
	for(i=1;i<=p;i++)
	{
		for(j=1;i<=s;i++)
		cin>>st[i].score;
		for(j=1;i<=s;i++)
		cin>>st[i].solvers;
	for(i=1;i<=s;i++)
		for(j=1;j<=s-i-1;j++)
			if(st[j].score>st[j+1].score)
				swap(st[j],st[j+1]);
	for(i=1;i<=s;i++)
		if(st[i].solvers>st[i+1].solvers)
			counter[i].c++;
			counter[i].index=i;
	}
	sort(counter,counter+p);
}