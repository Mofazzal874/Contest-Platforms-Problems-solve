#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int n ;cin>>n ; 
        vector <ll> v ; 
        vector <ll> ans ; 
        for(int i = 0 ;i < n ; i++){
            ll a; cin>>a; 
            v.push_back(a) ; 
        } 
        for(int i = 1 ; i <n; i++) ans.push_back((v[i] * v[i-1])) ; 
        cout<<*max_element(ans.begin(), ans.end())<<endl;
    }
}