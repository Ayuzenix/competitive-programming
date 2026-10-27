#include<bits/stdc++.h>
using namespace std ;

// Problem : 1904A
// Platform : Codeforces 

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ) {
    int a , b ; 
    cin>>a>>b ; 
    int xk , yk ; 
    cin>>xk>>yk ; 
    int xq , yq ; 
    cin>>xq>>yq ; 
    int places = 0 ; 
    if ( a != b ) {
        int p1 = xk + a , p2 = yk + b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk + a , p2 = yk - b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk - a , p2 = yk + b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk - a , p2 = yk - b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk + b , p2 = yk + a ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk + b , p2 = yk - a ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk - b , p2 = yk + a ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk - b , p2 = yk - a ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
    } else {
        int p1 = xk + a , p2 = yk + b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk + a , p2 = yk - b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk - a , p2 = yk + b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
        p1 = xk - a , p2 = yk - b ; 
        if ( ( ( p1 + a ) == xq && ( p2 + b ) == yq ) || ( ( p1 + a ) == xq && ( p2 - b ) == yq ) ||
        ( ( p1 - a ) == xq && ( p2 + b ) == yq ) || ( ( p1 - a ) == xq && ( p2 - b  ) == yq ) ||
        ( ( p1 + b ) == xq && ( p2 + a ) == yq ) || ( ( p1 + b ) == xq && ( p2 - a ) == yq ) || 
        ( ( p1 - b ) == xq && ( p2 + a ) == yq ) || ( ( p1 - b ) == xq && ( p2 - a ) == yq )  ) {
         places ++ ; 
        }
    }   
    cout<<places<<endl ;                 
    }
    return 0 ; 
    
}
