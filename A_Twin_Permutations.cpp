#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int n ;cin>>n ; 
        map <int , int> mp ;
        vector<int>ans(n) ; 
        for(int i = 0 ; i < n ;i++){
            int a; cin>>a; 
            mp[a] = i ; 
        }
        for(int i = 1, j = n; i<=n ;i++ , j--) ans[mp[i]] = j ; 
        for(auto it: ans) cout<<it<<" " ; 
        cout<<"\n" ; 
    }
     
}