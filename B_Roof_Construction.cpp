#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    
    int t ; cin>>t ; 
    while(t--){
        int n ; cin>>n ;
        int x=1 ; 
        for(int i = 0 ; ; i++){
            if(x>=n){x=x/2 ; break;} 
            x=x*2 ;  
        }
        for(int i = 1 ; i < n ;i++){
            if(i == x) cout<<0<<" "<<x<<" " ; 
            else cout<<i<<" " ; 
        }
        cout<<"\n" ; 
    }
}