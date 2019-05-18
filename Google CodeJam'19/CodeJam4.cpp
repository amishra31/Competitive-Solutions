#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
typedef long long int bi;
bi quickgcd(bi a,bi b, bi *x,bi *y) { 
    if (a == 0) { 
        *x = 0; 
        *y = 1; 
        return b; 
    } 
  
    bi x1, y1;
    bi gcd = quickgcd(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 
int main()
{
 int t;
 cin>>t;
 int l;
 for(l=1;l<=t;l++)
 {

           string str="";
 	lli n,lenghtt;
 	cin>>n>>lenghtt;
    vector<bi> v1(lenghtt);
    vector<bi> v2;
    vector<bi>v3;
    set<bi>s1;
    set<bi,greater<bi>>s2;
   for(int i=0;i<lenghtt;i++)
   cin>>v1[i];
  for(int i=0;i<lenghtt-1;i++){
           bi x,y; 
         v2.push_back(quickgcd(v1[i],v1[i+1],&x,&y));
         v3.push_back(quickgcd(v1[i],v1[i+1],&x,&y));
      } 
    bi value =v1[0]/v2[0];
    v3.push_back(value);
    value = v1[v1.size()-1]/v2[v2.size()-1];
    v3.push_back(value);
    	sort(v3.begin(), v3.end());
	v3.erase(unique(v3.begin(), v3.end()), v3.end());
	value=v1[0]/v2[0];

	int position=lower_bound(v3.begin(),v3.end(),value)-v3.begin();

	str= str+(char)(position+65);
	for(int i=0;i<v2.size();i++){
		position=lower_bound(v3.begin(),v3.end(),v2[i])-v3.begin();
		str=str+(char)(position+65);
	}
	value = v1[v1.size()-1]/v2[v2.size()-1];
	position = lower_bound(v3.begin(),v3.end(),value)-v3.begin();
	str=str+(char)(position+65);
	cout<<"Case #"<<l<<": "<<str<<endl;
  }
return 0;
}