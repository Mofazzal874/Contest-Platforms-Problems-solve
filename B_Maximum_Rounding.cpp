#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin>>t; 
    while(t--){
        string s; cin>>s; 
        reverse(s.begin() , s.end()) ; 
        s.push_back('0'); 
        int l = s.size() ;
        int carry = 0 ;
        int p=0; 
        int k ;   
        for(int k = 1; k < l ;k++){
            if(s[k-1] >='5'){
                if(s[k]!= '9') {  s[k]++ ; s[k-1] ='0' ; p =k-1; }

                else{ carry =1 ; s[k] = '0' ; p = k ;  }
            }
            else if(s[k]!= 9 && carry == 1) { s[k]++ ; carry = 0 ;}
        }
        if(s[s.size()-1] =='0') s.pop_back();
        for(int i = p-1; i>=0 ; i--) s[i] = '0' ; 
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
}