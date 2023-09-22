 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main(){
    int t;cin>>t;
     while(t--){
        int k ; cin>>k ; 
        int count = 0 ; 
        for(int i = 1; i < 2000; i++){
            if(count == k){
                cout<<i-1<<endl;
                break;
            }
            if(i%3 == 0 || i%10 == 3) continue;
            else count++ ;  
            
        }
     }
 }