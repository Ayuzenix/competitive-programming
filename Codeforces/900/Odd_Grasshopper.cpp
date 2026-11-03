#include<bits/stdc++.h>
using namespace std ;

// Problem : 1607B
// Platform : Codeforces 

int main() {
    
    long long t ;
    cin>>t ; 
    while ( t -- ) {
       long long x , n ; 
       cin>>x>>n ; 
       if ( n == 0 ) {
           cout<<x<<endl ;
       } else {
       if ( x % 2 == 0 ) {
           x -- ;                          
       } else {
           x ++ ;                         
       }
       long long leftsum , rightsum ;
       long long pair = ( ( n - 1 ) / 4 ) ;
       long long pos = ( 4 * pair ) ;
       long long rem = ( ( n - 1 ) % 4 ) ;
       if ( rem == 1 ) {
           leftsum = n ; 
           rightsum = 0 ;
       } else if ( rem == 2 ) {
           leftsum = ( n + ( n - 1 ) ) ;
           rightsum = 0 ; 
       } else if ( rem == 3 ) {
           leftsum = ( ( n - 1 ) + ( n - 2 ) ) ;
           rightsum = ( n ) ; 
       } else {
        leftsum = 0 , rightsum = 0 ;
       }
       // x = ( x - pos ) ;
       if ( x % 2 == 0 ) {
           x = ( x + pos ) ;
       } else {
           x = ( x - pos ) ;
       }
       if ( x % 2 == 0 ) {
           x = x - ( leftsum ) + rightsum ;                          
       } else {
           x = x + ( leftsum ) - rightsum ;                           
       }
       cout<<x<<endl ; 
    }
}                       
                              
  return 0 ;
}
