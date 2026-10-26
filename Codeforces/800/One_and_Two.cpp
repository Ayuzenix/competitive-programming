#include<bits/stdc++.h>
using namespace std ;

// Problem : 1788A
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
       vector<int>prefix( n , 0 ) ;
       vector<int>suffix( n , 0 ) ;
       int count = 0 ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            if ( store[i] == 2 ) {
                count ++ ;                           
            } 
            prefix[i] = count ; 
       }
       count = 0 ;
       for ( int i = n - 1 ; i >= 0 ; i -- ) {
           suffix[i] = count ; 
           if ( store[i] == 2 ) {
               count ++ ;                           
           }
       }
       int idx = -1 ; 
       for ( int i = 0 ; i < n - 1 ; i ++ ) {
            if ( prefix[i] == suffix[i] ) {
                idx = i ; 
                break ;
            }                         
       }
       if ( idx == -1 ) {
           cout<<idx<<endl ;                          
       } else {
           cout<<( idx + 1 )<<endl ;                         
       }
                                  
    }
                              
   return 0 ;
}
