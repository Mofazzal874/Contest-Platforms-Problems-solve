#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    int t; cin>>t; 
    while(t--){
        int n ;cin>>n ; 
        vector<int> a(n) , b(n) ;
        for(auto &it:a) cin>>it; 
        for(auto &it:b) cin>>it; 
        int colSum =*min_element(b.begin() , b.end())*n ; 
        int rowSum = *min_element(a.begin(), a.end())*n ;
        for(int i = 0 ; i < n ; i++){
            colSum+=a[i] ; 
            rowSum+=b[i]  ;
        } 
        cout<<min(colSum, rowSum)<<endl;
    }
}