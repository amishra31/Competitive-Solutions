#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,t;
cin>>t;
while(t--){
 cin>>n;
 long long int  flag,i,temp; long long int final=-1;
 long long int  attack[1000], defense[1000];
 for(i =0;i<n;i++)
 	cin>>attack[i];
 for(i =0;i<n;i++)
 	cin>>defense[i];
 if(attack[n-2]+attack[0]<defense[n-1])
 		final=defense[n-1];
 for(i =1;i<n-1;i++){
 	if(attack[i-1]+attack[i+1]<defense[i])
 		final=max(final,defense[i]);
 }
 if(attack[n-1]+attack[1]<defense[0])
    final=max(final,defense[0]);
  if(final==-1) 
  	cout<<-1<<endl;
  else
    cout<<final<<endl;
 }
}