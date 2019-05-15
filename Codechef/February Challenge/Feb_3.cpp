#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int pos,i,large;
	long long int t,n;
	cin>>t;
	while(t--){
	long long int attack[1000],defend[1000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>attack[i];
	for(i=0;i<n;i++)
		cin>>defend[i];
	large=defend[0]-(attack[1]+attack[n-1]);
	pos=0;
	for(i=1;i<n-1;i++){
		if(attack[i-1]+attack[i+1]<defend[i]){
			if((defend[i]-(attack[i-1]+attack[i+1]))>large){
			large=defend[i]-(attack[i-1]+attack[i+1]);
			pos=i;
		}
	}
}
	if((defend[n-1]-(attack[0]+attack[n-2]))>large){
		large=(defend[n-1]-(attack[0]+attack[n-2]));
			pos=n-1;
	}
	if(large>0)
		cout<<defend[pos]<<endl;
	else cout<<"-1\n";
	}
return 0;
}