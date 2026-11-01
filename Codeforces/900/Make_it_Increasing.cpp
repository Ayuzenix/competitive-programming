#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1675B 
// Platform : Codeforces 

int main() {
    
    long long t ; 
    cin>>t ; 
    while ( t -- ) {
       long long n ;
       cin>>n ; 
       vector<long long>store( n ) ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;                      
       }
       long long ones = 0 , zeros = 0 ; 
       for ( int i = 1 ; i < n ; i ++ ) {
            if ( store[i] == 0 ) {
                zeros ++ ; 
            }
            if( i > 1 ) {
               if ( store[i] == 1 ) {
                   ones ++ ; 
               }
            }
       }
       if ( ones > 0 || zeros > 0 ) {
           cout<<-1<<endl ;
       } else {
         long long operation = 0 ; 
         bool isdone = true ; 
         for ( int i = n - 2 ; i >= 0 ; i -- ) {
              if ( store[i] >= store[i+1] ) {
                  if ( store[i+1] == 0 ) {
                      isdone = false ; 
                      break ; 
                  }
                  int x ;
                  if ( ( store[i] / store[i+1] ) == 0 ) {
                    x = 1 ; 
                  } else {
                    x = log2( ( store[i] / store[i+1] ) ) + 1 ;  
                  }
                  store[i] = ( store[i] / pow( 2 , x ) ) ;
                  operation = operation + x ; 
              }
         }
         if ( isdone == true ) {
         cout<<operation<<endl ;
         } else {
            cout<<-1<<endl ;
         }
       }
    }
                              
                              
   return 0 ; 
}
