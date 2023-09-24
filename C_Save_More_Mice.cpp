#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    int t ;cin>>t ; 
    while(t--){
        int n , k ; cin>>n>>k ; 
        int bilai = 0 ; 
        vector<int> indur(k) ; 
        for(auto &it:indur) cin>>it ;
        sort(indur.begin() , indur.end(),greater<int>()) ;
        //for(auto it:indur) cout<<it<<" " ; 
        //cout<<endl;
        int counter = 0 ; 
        for(int i = 0 ; i < k ; i++){
            bilai+=(n-indur[i]) ;
            if(bilai < n ){
                counter++ ;
                //cout<<(n-indur[i])<<" ";   
                //cout<<bilai<<" " ; 
            }
            else break; 
        }
        cout<<counter<<endl;
    }
}