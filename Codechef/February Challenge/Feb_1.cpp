#include <bits/stdc++.h> 
using namespace std; 
long long int FindLCM(long long int a,long long int b) 
{ 
    return (a * b) / __gcd(a, b); 
}
long long int countDivisibles(long long int A, long long int B, long long int M) 
{ 
    if (A % M == 0) 
        return (B / M) - (A / M) + 1; 
    return (B / M) - (A / M); 
} 
int main() 
{ 
    long long int t,n,a,b,k,c,count1,count2,count3;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>k;
        c=FindLCM(a,b);
       count1=countDivisibles(1,n,a);
       count2=countDivisibles(1,n,b);
       count3=countDivisibles(1,n,c);
       if((count1+count2-2*count3)>=k) 
        cout<<"Win\n";
        else
        cout<<"Lose\n";
       
  }
    return 0; 
} 