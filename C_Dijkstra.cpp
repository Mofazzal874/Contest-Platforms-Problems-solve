// source:Shafayetsplanet
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);




#define infinity 1<<30  //taking 2^30 as infinity value

template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ;//make it a min-heap.Means minimum element will be at the top.
    //Here, vector<pair<int,int>> This part specifies the underlying container that the priority queue uses to store elements. 
    //Here, a vector of pairs of integers is used as the container

void dijktra(int n , vector<pair<int,int>> adjL[]){

    vector<int>dist(n+1, (int)1e18);
    vector<int> parent(n+1) ;  
    min_heap<pair<int,int>>pq; 
    dist[1] = 0 ;
    pq.push({dist[1], 1}) ;  
    while(!pq.empty()){
        int dis = pq.top().first; 
        int node = pq.top().second;  
        pq.pop() ; 
        for(auto it: adjL[node]){
            int adjNode = it.first ; 
            int adjWeight = it.second ; 
            //Relaxation
            if((dis + adjWeight) < dist[adjNode]){
                dist[adjNode] = (dis+adjWeight); 
                pq.push({dist[adjNode] , adjNode}) ;
                parent[adjNode] = node ;     
            }
        }
        
    }
    
    if(dist[n]== (int)1e18) cout<<-1 ;
    else{
        vector<int> ans; 
    ans.push_back(n)  ;
    int temp = n ; 
    while(parent[temp] != 0){
        ans.push_back(parent[temp]) ; 
        temp =parent[temp] ; 
    }
    for(int i = ans.size()-1 ; i>=0 ; i--){
        cout<<ans[i]<<" " ; 
    }

    }
    

}

int32_t main(){



    fastio

    vector<pair<int,int>> adjL[100100] ; 
    int numNodes , numEdges; 
    cin>> numNodes>>numEdges;  
    for(int i = 0 ;i <numEdges ; i++){
        int u , v, wt; 
        cin>>u>>v>>wt ;
        adjL[u].push_back({v,wt}) ; 
        adjL[v].push_back({u,wt}) ; 
    }
    dijktra(numNodes, adjL) ; 
    
}

