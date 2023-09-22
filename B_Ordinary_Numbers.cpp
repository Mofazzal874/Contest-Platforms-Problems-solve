#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t ; 
    while(t--){
        ll n ; cin>>n ;
        string s ; 
        s = to_string(n) ; 
        int l = s.size() ;
        ll digits = (l-1)*9;  
        ll start = 0 ; 

        for(int i = 0 ; i < l ; i++ )  start+=pow(10,i);  
        for(int i = 1; i <= 9 ; i++){
            if(start*i<=n) digits++ ; 
        }
        cout<<digits<<endl;
    }
}