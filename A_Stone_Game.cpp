#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t; 
    while(t--){
        int n ; cin>>n ; 
        vector<int> v(n) ;
        int mini = INT_MAX ; 
        int maxi = INT_MIN ;
        int minl , minr , maxl , maxr ; 
        for(int i = 0 ; i < n ; i++){
            int a ; cin>>a; 
            v.push_back(a) ; 
            if(a < mini){
                mini = a;
                minl = i+1;
            }
            if(a > maxi){
                maxi = a; 
                maxl = i+1; 
            } 
        }
        
        minr = n - minl + 1 ; 
        maxr = n - maxl + 1; 
        //cout<<mini<<" "<<maxi<<" "<<minl<<" "<<maxl<<" "<<minr<<" "<<maxr<<endl;
        int c1 = max(minl , maxl ) ; //from left to right ; 
        int c2 = max(minr , maxr) ; //from right to left ; 
        int c3 = min(minl+maxr , maxl+minr) ; //from both sides
        //cout<<c1<<" "<<c2<<" "<<c3<<endl;
        cout<<min({c1,c2,c3})<<endl;

    }
}