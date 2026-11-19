#include<bits/stdc++.h>
using namespace std ; 

// Problem : Red Versus Blue 
// Platform : Codeforces 

int main() {
                              
    int t ;
    cin>>t ; 
    while ( t -- ) {
       int n , r , b ;
       cin>>n>>r>>b ; 
       int x = ( r / ( b + 1 ) ) ;
       int rem = ( r % ( b + 1 ) ) ;  
       string str = "" ;
       while ( b > 0 ) {
          str = str.append( x , 'R' ) ;
          if ( rem > 0 ) {
              str = str + 'R' ;
              rem -- ; 
          }
          str = str + 'B' ;
          b -- ; 
       }
       str = str.append( x , 'R' ) ;
       cout<<str<<endl ; 
    }
                              
    return 0 ; 
}
