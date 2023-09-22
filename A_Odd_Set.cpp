#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t ;cin>>t; 
    while(t--){
        int n ; cin>>n ;
        n = 2*n ;
        int odd = 0  , even = 0 ; 
        while(n--){
            int a; cin>>a; 
            if(a & 1) odd++  ; 
            else even++ ; 
        }
        if(odd == even)cout<<"Yes\n" ; 
        else cout<<"No\n" ; 
    }
}