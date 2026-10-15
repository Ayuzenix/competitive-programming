#include<bits/stdc++.h>
using namespace std ;

// Problem : 1853A
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
       int isFound = -1 ; 
       for ( int i = 1 ; i < n ; i ++ ) {
            if ( ( store[i] < store[i-1] ) ) {
                isFound = 1 ; 
                break ;
            }                         
       }
       if ( isFound == 1 ) {
           cout<<0<<endl ;                          
       } else {
           int mini = INT_MAX ;
           for ( int i = n - 1 ; i > 0 ; i -- ) {
                int diff = store[i] - store[i-1] ;
                mini = min( mini , ( diff / 2 ) + 1 ) ;
           }
           cout<<mini<<endl ;
       }
                                  
    }
                           
   return 0 ;                          
}
