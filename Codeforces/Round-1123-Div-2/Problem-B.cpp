#include<bits/stdc++.h>
using namespace std ;

int main() {
              
    int t ;
    cin>>t ;
    while ( t -- ) {
      int n ;
      cin>>n ;
      vector<int>store( n ) ;
      unordered_map<int,int>mp ;
      for ( int i = 0 ; i < n ; i ++ ) {
           cin>>store[i] ;
           mp[store[i]] ++ ;
      }
      vector<int>list ;
      vector<int>result ;
      for ( auto &it:mp ) {
           list.push_back( it.first ) ;         
      }
      sort( list.rbegin() , list.rend() ) ;
      for ( int i = 0 ; i < list.size() ; i ++ ) {
           if ( i == 0 ) {
               int maxi = list[i] , freq = mp[list[i]] ;       
               while ( freq -- ) {
                    result.push_back( maxi ) ;
               }
           } else {
              int freq = min( mp[list[0]] , mp[list[i]] ) , maxi = list[i] ;
              while ( freq -- ) {
                     result.push_back( maxi ) ;        
              }
              if ( mp[list[i]] <= mp[list[0]] ) {
                  mp[list[i]] = 0 ;
                  mp.erase( list[i] ) ;
              } else {
                  mp[list[i]] = mp[list[i]] - mp[list[0]] ;           
              }
           }          
      }
      mp.erase( list[0] ) ;
      while ( !mp.empty() ) {
             for ( int i = 1 ; i < list.size() ; i ++ ) {
                 if ( mp.find( list[i] ) != mp.end() ) {
                     result.push_back( list[i] ) ;
                     mp[list[i]] -- ;
                     if ( mp[list[i]] == 0 ) {
                        mp.erase( list[i] ) ;           
                     }
                 }          
             }       
      }
      for ( int i = 0 ; i < n ; i ++ ) {
           cout<<result[i]<<" " ;         
      }
      cout<<endl ;
    }
   return 0 ;
}
