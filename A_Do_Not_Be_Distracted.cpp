#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int n ;cin>>n ; 
        string s ; cin>>s;
        int flag = 0 ; 
        if(n == 1) {
            cout<<"YES\n" ;
            continue;
        }  
        for(int i = 0 ; i <n; i++){
            int indx;  
            for(int j = i ; j < n ;j++){
                if(s[i] == s[j]) indx = j ;     
            }

            for(int p = i ; p <= indx ; p++){
                if(s[i] != s[p]) {
                    flag = 1 ; 
                    break; 
                }
            }
            if(flag == 1){
                break; 
            }
        }
        if(flag == 1) cout<<"NO\n" ; 
        else cout<<"YES\n" ; 
    }
}