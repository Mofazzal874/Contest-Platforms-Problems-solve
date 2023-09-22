#include<bits/stdc++.h>
using namespace std;



string extract(string &s){

    int j = 0 ;
    string ans = "" ; 
   for(int i = 0 ; i < s.size() ; i++){
    if(s[i] >= '0' && s[i]<= '9') {
        ans.push_back(s[i]) ; 
    }
    else if(s[i] == 'x' || s[i] == 'y' ||s[i] == 'z'){
        ans.push_back(' '); 
    }
   }
   //cout<<ans<<endl;
   return ans;
}


int main(){

    string e1 , e2 , e3 ; 
    cin>>e1 ; 

    int a1 , b1 , c1 , d1 , a2 , b2 , c2 , d2 , a3 , b3 , c3 , d3 ;
    string s = extract(e1) ;
    s.push_back(' ') ;
    cout<<s<<endl;
    
    sscanf(s, "%d %d %d %d" ,a1 , b1 , c1, d1) ; 
    cout<<a1<<b1<<c1<<d1<<endl; 
    //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl ;
     



    
}