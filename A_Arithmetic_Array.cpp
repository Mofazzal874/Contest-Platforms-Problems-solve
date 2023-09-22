#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t ; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        int sum = 0 ; 
        for(int i = 0 ; i < n ; i++){
            int a; cin>>a; 
            sum+=a; 
        }
        if(sum == n ) cout<<0<<endl;
        else if(sum > n ) cout<<sum-n<<endl; //add zeroes
        else cout<<1<<endl;
    }
}