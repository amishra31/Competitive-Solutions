#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,i,b,n1,counter;
	cin>>t; counter=0;
	while(t--){
		counter++;
		b=0;
		int flag=0;	
	cin>>n;
	i=1;
	n1=n;
	if(n==4){
		cout<<"Case #"<<counter<<":"<<" "<<"1 "<<"3\n";
		continue;
	}
	while(n1>0){
	if(n1%10==4){
	b=b+i;
	}
	n1=n1/10;
	i=i*10;
	}

	if(flag==0)
	cout<<"Case #"<<counter<<":"<<" "<<n-b<<" "<<b<<endl;
	}
}