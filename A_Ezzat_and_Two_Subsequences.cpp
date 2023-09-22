#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        ll max , a ; cin>>a; 
        max = a;
        int p = n-1; 
        ll sum = a;   
        while(p--){
            cin>>a;
            sum+=a ;
            if(a > max) max = a;  
        }
        sum = sum-max ; 
        //cout<<sum<<" "<<max<<endl;
        double ans = max + sum*1.000000000/(n-1) ;
        cout<<setprecision(9)<<fixed<<ans<<endl;
    }
}