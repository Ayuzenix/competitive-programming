#include<bits/stdc++.h>
using namespace std ;

// Problem : 1837A
// Platform : Codeforces 

bool isPrime( int x ) {
     for ( int i = 2 ; i * i <= x ; i ++ ) {
          if ( i % 2 == 0 ) {
              return false ; // Not Prime                            
          }                         
     } 
     return true ; // Number is Prime 
}

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ) {
       int x , k ; 
       cin>>x>>k ;
       if ( isPrime( x ) == true || ( ( x % k ) != 0 ) ) {
           if ( k == x ) { // Edge Case 
               cout<<2<<endl ; 
               cout<<k-1<<" "<<1<<endl ; // as Value of k cannot be 1 
           } else {                       
           cout<<1<<endl ;
           cout<<x<<endl ;
           }
       } else {
           cout<<2<<endl ;
           for ( int i = 1 ; i < x ; i ++ ) {
                if ( i % k != 0 ) {
                    int diff = ( x - i ) ;
                    if ( diff % k != 0 ) {
                       cout<<i<<" "<<diff<<endl ;
                       break ; 
                    }
                }                       
           }
       }                           
                                  
    }
   return 0 ;
}
