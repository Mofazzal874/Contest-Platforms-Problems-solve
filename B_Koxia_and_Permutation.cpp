#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    int t; cin>>t; 
    while(t--){
        int n , k ; cin>>n>>k ; 
        for(int i = 1 , j = n  ; i<= n/2 ; i++ , j-- ){
            cout<<j<<" "<<(n-j+1)<<" " ; 
        }
        if(n&1) cout<<ceil(n/2.0)<<endl;
    }
}