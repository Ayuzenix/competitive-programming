#include<bits/stdc++.h>
using namespace std ;

// Problem : 1857A
// Platform : Codeforces 

int main() {
   
   int t ;
   cin>>t ;
   while ( t -- ) {
       int n ;
       cin>>n ;
       vector<int>store( n ) ;
       int odd = 0 , even = 0 ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ; 
            if ( store[i] % 2 == 0 ) {
                even ++ ;                          
            } else {
                odd ++ ;                          
            }
       }
       if ( odd % 2 == 0 ) {
           if ( odd == 0 && even <= 1 ) {
               cout<<"No"<<endl ;                          
           } else {
               cout<<"Yes"<<endl ;                          
           }                          
       } else {
           cout<<"No"<<endl ;                          
       }
   }
                            
   return 0 ;
}
