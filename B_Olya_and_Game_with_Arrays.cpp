#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
int32_t main(){

    fastio
    int t; cin>>t; 
     
    while(t--){
        vector<int> first_min , second_min;
        int n; cin>>n ; 
        while(n--){
            int a1 ; cin>>a1 ;
            vector<int> v(a1) ; 
            for(auto &it:v) cin>>it; 
            sort(v.begin(), v.end()) ; 
            first_min.push_back(v[0]) ; 
            second_min.push_back(v[1]) ;
        }
         
        sort(second_min.begin(), second_min.end()) ;
        int ans = 0 ;  
        for(int i = second_min.size()-1; i > 0 ; i--)  ans +=second_min[i] ; 
        ans+=*min_element(first_min.begin(), first_min.end()) ; 
        cout<<ans<<endl;
    }

}