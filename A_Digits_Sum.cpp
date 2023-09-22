#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        int ans = n/10 ; 
        if(n%10 == 9) ans++ ; 
        cout<<ans<<endl;
    }
}