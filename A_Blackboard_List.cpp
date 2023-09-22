#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n; 
        vector<ll> v(n) ; 
        for(auto &it:v) cin>>it ; 
        sort(v.begin() , v.end()) ; 
        if(v[0]<0) cout<<v[0]<<endl;
        else {
            cout<<v[n-1]<<endl;
        }
       
    }
}