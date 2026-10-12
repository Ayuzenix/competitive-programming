#include<bits/stdc++.h>
using namespace std ;

// Problem : Jagged Swaps 
// Constest : 1896A

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
       if ( store[0] != 1 ) {
           cout<<"No"<<endl ;                          
       } else {
           cout<<"Yes"<<endl ;                          
       }
                             
    }
                            
   return 0 ;
}
