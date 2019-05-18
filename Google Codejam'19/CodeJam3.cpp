#include <bits/stdc++.h> 
using namespace std; 
bool SieveOfEratosthenes(int n, bool isPrime[]) 
{ 
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i <= n; i++) 
        isPrime[i] = true; 
  
    for (int p = 2; p * p <= n; p++) { 
        if (isPrime[p] == true) { 
            for (int i = p * 2; i <= n; i += p) 
                isPrime[i] = false; 
        } 
    } 
} 
int main() 
{ 
    int t,n,l,i,j,max;
    cin>>t;
    while(t--){
        int arr[100],crypt[100],crypt1[100];
    char c[100];
        cin>>max;
        int counter=0;
        int counter1=0;
        int counter2=0;
    cin>>l; 
    set<int> st; 
    set<int>::iterator it = st.begin(); 
    set<int>::iterator it1, it2; 
    for(i=0;i<l;i++){
            cin>>n;
         int flag = 0;   
    bool isPrime[n + 1]; 
    SieveOfEratosthenes(n, isPrime); 
    for (int i = 2; i < n; i++) { 
        int x = n / i; 
  
        if (isPrime[i] && isPrime[x] and x != i and x * i == n) { 
           crypt[counter++]=i;
           crypt[counter++]=x;
            st.insert(i);st.insert(x);
            flag = 1; 
            break;
        } 
    }   
    }
    for (it1 = st.begin(); it1!=st.end();  ++it1)
        arr[counter1++]=*it1;

   for(i=0;i<=l*2;i=i+2){
     int c1=crypt[i];
     int c2=crypt[i+1];
     int c3=crypt[i+2];
     int c4=crypt[i+3];
     if(c1==c3||c1==c4){
        crypt1[counter2++]=c2;
        crypt1[counter2++]=c1;
        //cout<<c2<<" "<<c1;
        }
    else{
        crypt1[counter2++]=c1;
        crypt1[counter2++]=c2;
        // cout<<c1<<" "<<c2;
    }
    }
    cout<<counter2;
    cout<<crypt1[49]<<" ";

    for(i=0;i<=l*2;i=i+2){
        int k=crypt1[i];{
            for(j=0;j<l;j++){
                if(k==arr[j])
                {
                    char r='A'+j;
                    cout<<r;
                    //c[i++]=r;
                }
            }
        }
    }
    for(j=0;j<l;j++)
    {
        if(arr[j]==crypt1[counter2-1])
        {

        cout<<"Check";
            char r='A'+j;
            cout<<r<<endl;
        }

    }

}
    return 0; 
} 