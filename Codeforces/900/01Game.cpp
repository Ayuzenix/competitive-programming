#include<bits/stdc++.h>
using namespace std ;

// Problem : 1373B
// Platform : Codeforces 

int main() {
    
    int t ;
    cin>>t ; 
    while ( t -- ) {
      string s ; 
      cin>>s ; 
      int count1 = 0 , count2 = 0 ; 
      for ( int i = 0 ; i < s.size() ; i ++ ) {
           if ( s[i] == '0' ) {
               count1 ++ ;                           
           } else {
               count2 ++ ;                           
           }                      
      }
      int mini = min( count1 , count2 ) ;
      if ( mini % 2 == 0 ) {
          cout<<"NET"<<endl ;                           
      } else {
          cout<<"DA"<<endl ;                           
      }
                                  
    }
                              
                              
    return 0 ; 
}
