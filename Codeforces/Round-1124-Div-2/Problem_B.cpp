#include<bits/stdc++.h>
using namespace std ;

// Problem : KiaKio and Squared Numbers

int main() {
              
    int t ;
    cin>>t; 
    while ( t -- ) {
       long long n ;
       cin>>n ;
       vector<long long>store( n ) ;
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;         
       }
       bool gama = true ;
       long long result = 0 ;
       vector<long long>check( n , 0 ) ;
       while ( gama == true ) {
          for ( int i = 0 ; i < store.size() ; i ++ ) {   
               long long curr = store[i] , sum = 0 ;
               while ( curr > 0 ) {
                      int digit = ( curr % 10 ) ;
                      sum = sum + ( digit * digit ) ;
                      curr = curr / 10 ;
               }
               store[i] = sum ;
               if ( ( store[i] == 1 || store[i] == 89 ) && check[i] != -1 ) {
                   check[i] = -1 ;
               }
          }
          unordered_map<long long,long long>mp ;
          for ( int i = 0 ; i < n ; i ++ ) {
               mp[store[i]] ++ ;            
          }
             long long value = 0 ;
             for ( auto &it:mp ) {
                 if ( it.second >= 2 ) {
                     value = value + ( ( it.second * ( it.second - 1 ) ) / 2 ) ;
                 }
             }
          if ( value > result ) {
              result = value ;
          }
          int count = 0 ;
          for ( int i = 0 ; i < n ; i ++ ) {
               if ( check[i] == -1 ) {
                 count ++ ;
               }    
          }
          if ( count == n ) {
              gama = false ;
          }
       }
       cout<<result<<endl ;           
    }
           
   return 0 ;
}
