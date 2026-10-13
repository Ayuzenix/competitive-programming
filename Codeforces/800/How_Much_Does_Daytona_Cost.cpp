#include<bits/stdc++.h>
using namespace std ;

int main() {
    
    int t ; 
    cin>>t ;
    while ( t -- ) {
       int n , k ;
       cin>>n>>k ;
       vector<int>store( n ) ;
       bool isoccur = true ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;   
            if ( store[i] == k ) {
                isoccur = false ;                           
            }
       }
       if ( isoccur == false ) {
           cout<<"Yes"<<endl ;                           
       } else {
           cout<<"No"<<endl ;                          
       }
       
    }
                            
   return 0 ;
}
