#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
const int M = 1e9+7 ;

int main(){

    vector<ll> fact(1e5+1);
    ll f =  1 ; 
    fact[0] = 1 ; 
    for(ll i = 1 ; i<=1e5  ;i++){
        f = (f*i)% M ;
        fact[i] = f ; 
    }
    for(auto i : fact) cout<<i<<" " ;
   


    


 
}