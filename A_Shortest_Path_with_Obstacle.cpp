#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int t; cin>>t; 
    cout<<"\n" ; 
    while(t--){
        int Ac , Ar , Bc, Br , Fc, Fr ; 
        cin>>Ac>>Ar>>Bc>>Br>>Fc>>Fr ; 

        int dis = abs(Ar-Br) + abs(Bc - Ac) ; 

        if(Ar == Fr && Ac< Fc && Fr == Br && Fc < Bc) dis+=2 ; 
        else if(Ac == Fc && Ar > Fr && Fc == Bc && Fr > Br) dis+=2 ; 
        else if(Ar == Fr && Ac > Fc && Fr == Br && Fc > Bc) dis+=2 ;
        else if(Ac == Fc && Ar < Fr && Fc == Bc && Fr < Br) dis+=2 ; 
        cout<<dis<<endl;
    }
    
}