#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


bool bellmanFord(int n , vector<vector<int>> &adjL ){

    vector<int> dist(n,1e18);
    dist[0] = 0 ; 

    for(int i = 0 ; i < n-1 ; i++){
        for(auto it:adjL){
            int u = it[0] ;
            int v = it[1] ; 
            int t = it[2] ;
            if(dist[u] + t < dist[v]){
                dist[v] = dist[u] + t ; 
            }
        }
    }
    for(auto it:adjL){
        int u = it[0] ;
            int v = it[1] ; 
            int t = it[2] ;
            if(dist[u] + t < dist[v]){
                return true ; 
            }

    } 
    return false ; 
}


int32_t main(){

    int t ;cin>>t ; 
    while(t--){
        vector<vector<int>> adjL ; 
        int n , m ; cin>>n>>m ; 
        for(int i = 0 ; i< m ; i++){
            int x , y , t ; 
            cin>>x>>y>>t ; 
            vector<int> temp ; 
            temp.push_back(x) ;temp.push_back(y) ; temp.push_back(t);
            adjL.push_back(temp) ;   
        }

       if(bellmanFord(n,adjL)) cout<<"possible\n" ;
       else cout<<"not possible\n" ;  
    }
    
}