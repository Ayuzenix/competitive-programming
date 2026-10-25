#include<bits/stdc++.h>
using namespace std ;

// Problem : We need the Zero 
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
       if ( n % 2 == 0 ) {
           int curr = 0 ; 
           for ( int i = 0 ; i < n ; i ++ ) {
                curr = ( curr ^ store[i] ) ;                          
           }
           if ( curr == 0 ) {
               cout<<"0"<<endl ;                          
           } else {
               cout<<"-1"<<endl ;                          
           }
       } else {
          int curr = 0 ; 
          for ( int i = 0 ; i < n ; i ++ ) {
                curr = ( curr ^ store[i] ) ;                         
          }
          cout<<curr<<endl ;
       }                          
   }
   return 0 ;
}
