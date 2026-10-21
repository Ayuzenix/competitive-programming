#include<bits/stdc++.h>
using namespace std ;

// Problem : Walking Master 
// Platform : Codeforces 

int main() {
    
    long long t ; 
    cin>>t ; 
    while ( t -- ) {
        long long a , b , c , d  ;
        cin>>a>>b>>c>>d ; 
        long long steps = 0 , isdone = 0 ; 
        if ( c < a ) {
            if ( b > d ) {
                isdone = -1 ; 
            } else {
            steps = steps + ( long long )( a - c ) * 1 + ( long long )( d - b ) * 2 ;    
            }
        } else {
           if ( b > d ) {
            isdone = -1 ; 
           } else {
            steps = steps + ( d - b ) ;
            if ( ( a + ( d - b ) ) < c ) {
                isdone = -1 ; 
            } else {
                a = a + ( d - b ) ;
                steps = steps + ( a - c ) ;
            }
           }
        }
        if ( isdone == -1 ) {
            cout<<-1<<endl ;
        } else {
            cout<<steps<<endl ;
        }
    }
    return 0 ;
}
