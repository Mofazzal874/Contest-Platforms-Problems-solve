#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size() ; 
    int m = matrix[0].size() ; 
    cout<<n<<" "<<m<<endl;
}


int main(){

    int t; cin>>t; 
    while(t--){
        int n, m ; cin>>n>>m ; 
        vector<vector<int>> matrix ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin>>matrix[i][j] ; 
            }
        }
        setZeros(matrix) ; 
    }
    
}