#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        int *v ; 
        v = new int[n+1]; 
        for(int i = 0 ; i < n ;i++) v[i] = i+1 ;
        //for(int i = 0 ; i < n ;i++) cout<<v[i]<<" " ; 
        if(n&1) {
            for(int i = 1; i < n-1 ; i++) {
                swap(v[i] , v[i-1]); 
                i++;
            }
            swap(v[n-1] , v[n-2]) ; 

        }
        else{
            for(int i = 1; i < n ; i++) {
                swap(v[i], v[i-1]) ;
                i++;
            }
        }

        for(int i = 0 ; i < n ; i++)cout<<v[i]<<" " ; 
        cout<<"\n" ; 
         

    }
}