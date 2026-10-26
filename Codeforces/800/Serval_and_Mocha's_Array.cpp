#include<bits/stdc++.h>
using namespace std ;

// Problem : 1789A
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
       bool isdone = false ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            for ( int j = i + 1 ; j < n ; j ++ ) {
                 int gcd = __gcd( store[i] , store[j] ) ;
                 if ( gcd <= 2 ) {
                     isdone = true ; 
                     break ;
                 }
            } 
            if ( isdone == true ) {
                break ;                          
            }
       }
       if ( isdone == true ) {
           cout<<"Yes"<<endl ;                           
       } else {
           cout<<"No"<<endl ;                          
       }
   }
                              
   return 0 ;
}
