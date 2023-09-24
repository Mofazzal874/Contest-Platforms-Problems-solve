#include<bits/stdc++.h>
using namespace std;
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){

   
    unsigned long long l , r ,x;cin>>l>>r;
    unsigned long long ans = 0 ;
    x=1 ; 
    while(x<l) x=2*x ;
    while(x<=r) ans+=x , x=2*x ; 
    cout<<ans<<"\n" ; 


}