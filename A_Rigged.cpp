#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    int t ; cin>>t ;
    while(t--){
        int n ;cin>>n ;
        vector<int> s , e ;  
        int Sp , Ep ; cin>>Sp>>Ep ; 
        for(int i = 0 ; i < n-1 ;i++)
        {
            int a  , b ; cin>>a>>b ; s.push_back(a) , e.push_back(b) ;  
        }
        int flag = 0 ; 
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]>=Sp && e[i] >= Ep){flag = 1 ;break; }
        }
        if(flag==0) cout<<Sp<<endl;
        else cout<<-1<<endl;
    }
}