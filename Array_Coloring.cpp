#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        int odd =0, even = 0 ; 
        for(int i =0 ;i < n ; i++){
            int a; cin>>a; 
            if(a&1) odd++ ; 
            else even++ ; 
        }

        if( odd & 1) cout<<"NO\n" ; 
        else cout<<"YES\n" ; 
    }
}