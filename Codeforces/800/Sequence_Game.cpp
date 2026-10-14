#include<bits/stdc++.h>
using namespace std ;

// Problem : 1862B 
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
     vector<int>result ;
     result.push_back( store[0] ) ;
     for ( int i = 1 ; i < n ; i ++ ) {
          if ( result.size() == ( 2 * n ) ) {
              break ;                          
          }
          int curr = store[i] ;
          if ( curr >= store[i-1] ) {
              result.push_back( curr ) ;                          
          } else {
              result.push_back( 1 ) ;
              result.push_back( curr ) ;
          }
     }
     cout<<result.size()<<endl ;
     for ( int i = 0 ; i < result.size() ; i ++ ) {
          cout<<result[i]<<endl ;
     }
   }
   return 0 ;
}
