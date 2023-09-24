#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    int t ; cin>>t ; 
    while(t--){
        int  n , m ; cin>>n>>m ;
        vector<int> a(n) , b(m) ; 
        for(auto &it:a) cin>>it ; 
        for(auto &it:b) cin>>it;  
        int sum =  0 ; 
        for(int i = 0 ; i < m; i++){
            int mIndx = min_element(a.begin() , a.end()) - a.begin() ; 
            a[mIndx]  = b[i] ; 

        }
        for(auto it:a) sum+=it ; 
        cout<<sum<<endl;
    }
}