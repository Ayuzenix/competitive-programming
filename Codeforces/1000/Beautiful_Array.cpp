#include<bits/stdc++.h>
using namespace std ;

// Problem : 1715B
// Platform : Codeforces 

int main() {
                              
    long long t ;
    cin>>t ; 
    while ( t -- ) {
       long long n , k , b , s ; // k --> dividing b -->> beauty s --> summision 
       cin>>n>>k>>b>>s ; 
       vector<long long>store( n ) ;
       long long i = 0 ; 
       long long maxProduced = ( long long ) ( ( n ) * ( k - 1 ) ) , required = ( long long ) ( s - ( k * b ) ) ;
       if ( maxProduced < required || ( k * b > s ) ) {
           cout<<-1<<endl ;                           
       } else {
          long long sum = 0 ;
          while ( ( required > ( k - 1 ) ) ) {
              required = required - ( k - 1 ) ;
              sum = sum + ( k - 1 ) ;
              store[i] = k - 1 ; 
              i ++ ; 
          }
          long long rem = ( s - sum ) ;
          store[i] = rem ; 
          i ++ ; 
          while ( i < n ) { 
            store[i] = 0 ; 
            i ++ ; 
          }
          for ( int i = 0 ; i < n ; i ++ ) {
               cout<<store[i]<<" " ;
          }
          cout<<endl ; 
       }
    }
                              
    return 0 ; 
}
