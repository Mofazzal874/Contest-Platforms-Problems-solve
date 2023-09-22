#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    int t ; cin>>t ;
    while(t--){
        int n , x , t ; cin>>n>>x>>t ; 
        if(x>t) cout<<0<<"\n"  ; 
        else if(x==t)cout<<n-1<<"\n"  ; 
        else {
            int ans = 0 ; 
            int a = t/x ; 
            if(a>=n) {
                ans = (n*(n-1)) / 2 ; 
                cout<<ans<<"\n" ; 
            }
            else {
                int z = n-a ; 
                ans+=z*a ;  
                ans+=(a*(a-1))/2 ; 
                cout<<ans<<endl;
            }
        }
    }
}