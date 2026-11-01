#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1666D
// Platform : Codeforces

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ) {
       string s , t ; 
       cin>>s>>t ; 
       unordered_map<char,int>mp ; 
       for ( int i = 0 ; i < t.size() ; i ++ ) {
            mp[t[i]] ++ ;                        
       }
       string str = "" ;
       for ( int i = s.size() - 1 ; i >= 0 ; i -- ) {
            if ( mp.find( s[i] ) != mp.end() ) {
                str = str + s[i] ;
                mp[s[i]] -- ; 
                if ( mp[s[i]] == 0 ) {
                    mp.erase( s[i] ) ;                          
                }
            }                           
       }
       reverse( str.begin() , str.end() ) ;
       if ( str == t ) {
           cout<<"Yes"<<endl ;                          
       } else {
           cout<<"No"<<endl ;                           
       }                          
    }
                              
                              
   return 0 ; 
}
