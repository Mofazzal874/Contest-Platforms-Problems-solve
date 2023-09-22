#include<bits/stdc++.h>
using namespace std;
#define int long long




int32_t main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        vector<int> a; 
        for(int i =0 ; i <n ; i++){
            int x; cin>>x; 
            a.push_back(x) ; 
        }
        sort(a.begin() , a.end()) ; 
        // for(auto it:a) cout<<it<<" " ; 
        // cout<<endl;
        vector<int> b,c; 
        int p = a[n-1] ;
        c.push_back(p); 
        for(int i =0 ; i<n-1; i++){
            if(a[i]== p) c.push_back(p) ; 
            else {
                b.push_back(a[i]) ;
            }
        }
        // for(auto it:b)cout<<it<<" " ; 
        // cout<<endl;
        // for(auto it:c)cout<<it<<" " ; 
        // cout<<endl;
        //int flag = 0 ; 
        // for(int i = 0 ; i < n-1;i++){
        //     if(b[i]%p==0) {
        //     flag =1 ;
        //     break;}
        // }

        if(b.size()==0 || c.size()==0)cout<<"-1"<<endl;
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it:b) cout<<it<<" " ;
            cout<<endl;
            for(auto it:c) cout<<it<<" " ;
            cout<<endl;

        }
    
    }
}