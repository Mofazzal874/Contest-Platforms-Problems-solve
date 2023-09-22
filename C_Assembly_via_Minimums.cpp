#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t; cin>>t ; 
    while(t--){
        int n ;cin>>n ; 
        int l = (n*(n-1))/2 ; 
        vector<int> v ;  
        for(int i = 0 ; i < l ; i++){
            int a; cin>>a; 
            v.push_back(a) ;   
        }
        sort(v.begin() ,  v.end()) ;
        //for(auto it:v) cout<<it<<" " ; cout<<endl;
        for(int i = 0,j = 1  ; i < l ;i= i+ (n-j++)){
            cout<<v[i]<<" " ;
        }
        
        cout<<*max_element(v.begin(), v.end())<<endl;

    }
}