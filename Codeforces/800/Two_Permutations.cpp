#include<bits/stdc++.h>
using namespace std ;

// Problem : 1761A 
// Platform : Codeforces 

int main() {
    
    int t ; 
    cin>>t ; 
    while ( t -- ) {
       int n , a , b ; 
       cin>>n>>a>>b ; 
       if ( a == n ) {
           if ( b == n ) {
               cout<<"Yes"<<endl ;                            
           } else {
               cout<<"No"<<endl ;                          
           }                          
       } else {
         if ( ( n - a - 1 ) < b ) {
             cout<<"No"<<endl ;                           
         } else {
            int diff = ( n - ( a + b ) ) ;    
            if ( diff == 1 ) {
                cout<<"No"<<endl ;                         
            } else {
                cout<<"Yes"<<endl ;                          
            }
         }                            
       }
                                 
    }
                              
   return 0 ; 
}
