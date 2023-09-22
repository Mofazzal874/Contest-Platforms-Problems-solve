#include<bits/stdc++.h>
using namespace std;
#define int long long
template<typename T>
using min_heap = priority_queue<T , vector<T> , greater<T>> ; //to make minHeap. min_heap<type> name
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){


    int m , n ; cin>>m>>n ; 
    vector<vector<int>> pre(m+1, vector<int>(n+1)) ;
    int sum = 0 ;
    int upSum = 0 , leftSum = 0 , commonSum=0; //to calculate the sum in (i, j), we will add (i, j-1) or leftSum and add(i-1,j) or upSum 
                                //also subtract the common portion(i-1,j-1) to avoid adding two times
    for(int i = 1;i<=m ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin>>pre[i][j] ;
            upSum = pre[i-1][j];
            leftSum = pre[i][j-1] ;
            commonSum = pre[i-1][j-1] ;
            pre[i][j] = (upSum + leftSum - commonSum)+pre[i][j]; //if you see closely , you can see that it is formula from set theory where
                                                                    //you have to subtract the common portion 
                                                                    //S(A u B) = S(A) + S(B) - S(A n B)  
        }
    }
    // for(auto i:pre){
    //     for(auto j : i ){
    //         cout<<j<<" " ;
    //     }
    //     cout<<endl;
    // } 
    int q ; cin>>q ;
    while(q--){
        int a , b , c, d ; cin>>a>>b>>c>>d ; 
        cout<<pre[c][d] - pre[a-1][d] - pre[c][b-1] + pre[a-1][b-1]<<endl; 
    }
 
}