#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int array[4] ; 
        for(int i = 0 ; i < 4 ; i++){
            cin>>array[i]; 
        }
        int s1 = max(array[0] , array[1]) ; 
        int s2 = max(array[2] , array[3]) ; 
        sort(array , array+4) ;
        int most = max(s1, s2) ;  
        int sum = s1+s2; 
        if(most == array[3] && (sum - most) == array[2]) cout<<"YES\n" ; 
        else cout<<"NO\n" ; 
    }
}