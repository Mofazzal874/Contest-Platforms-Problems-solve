#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t ; cin>>t; 
    while(t--){
        int n ; cin>>n ;
        int c1 = n/3 ; 
        int c2 = ceil(n/3.00) ; 
        
        if(c1 + 2*c2 == n) cout<<c1<<" "<<c2<<endl;
        else cout<<c2<<" "<<c1<<endl;
        
    }
}