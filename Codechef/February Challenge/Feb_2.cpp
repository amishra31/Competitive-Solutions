#include <bits/stdc++.h> 
using namespace std;   
const int MAX_CHAR = 26; 
int special(string str[], int n) {  
    int count=0;
    bool first[MAX_CHAR]; 
    memset(first, true, sizeof(first)); 
    for (int i = 0; i < n; i++) { 
        bool second[MAX_CHAR] = { false }; 
        for (int j = 0; str[i][j]; j++) { 
            if (first[str[i][j] - 'a']) 
                second[str[i][j] - 'a'] = true;  
        } 
        memcpy(first, second, MAX_CHAR); 
    } 
    for (int i = 0; i < 26; i++) 
        if (first[i]) 
            count++; 
            return count;
} 
int main() 
{ 
    long long int t,n,i;
    string str[200];
    cin>>t;
    while(t--){
    cin>>n;
    for(i=0;i<n;i++)
    cin>>str[i];
    cout<<special(str, n)<<endl; 
    }
    return 0; 
} 