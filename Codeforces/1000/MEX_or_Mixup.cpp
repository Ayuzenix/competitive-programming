#include<bits/stdc++.h>
using namespace std ;

// Problem : 1567B
// Platform : Codeforces 

int main() {
    
    long long t ;
    cin>>t ; 
    while ( t -- ) {
       long long a , b ;
       cin>>a>>b ; 
       long long prev = 0 , len = a ; 
       long long dis = ( a / 4 ) ;
       long long st = ( long long )( 4 * dis ) ;
       for ( long long i = st ; i < a ; i ++ ) {
            prev = ( prev ^ i ) ;
       }
       if ( prev == b ) {
           cout<<len<<endl ;
       } else {
           long long x = ( prev ^ b ) ;
           if ( x == a ) {
               cout<<len+2<<endl ;
           } else {
               cout<<len+1<<endl ;
           }
       }
       
    }
                              
    return 0 ; 
}
