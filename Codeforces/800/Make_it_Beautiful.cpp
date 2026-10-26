#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1783A
// Platform : Codeforces 

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ) {
       int n ;
       cin>>n ;
       vector<int>store( n ) ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;                         
       }
       sort( store.begin() , store.end() ) ;
       int l = 0 , r = n - 1 ; 
       vector<int>result ; 
       while ( l <= r ) {
           if ( l == r ) {
               result.push_back( store[r] ) ;
               r -- ;
               l ++ ;
               break ; 
           } else {
               result.push_back( store[r] ) ;
               result.push_back( store[l] ) ;
               l ++ ; 
               r -- ; 
           }                        
       }
       int curr = result[0] ; 
       bool isdone = false ; 
       for ( int i = 1 ; i < n ; i ++ ) {
            if ( result[i] == curr ) {
                isdone = true ; 
                break ; 
            } else {
                curr = curr + result[i] ;                          
            }                        
       }
       if ( isdone == true ) {
           cout<<"No"<<endl ;                          
       } else {
           cout<<"Yes"<<endl ; 
           for ( int i = 0 ; i < n ; i ++ ) {
                cout<<result[i]<<" " ;                         
           }
           cout<<endl ;
       }
    }
                              
   return 0 ;
}
