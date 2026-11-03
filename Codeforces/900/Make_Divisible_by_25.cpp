#include<bits/stdc++.h>
using namespace std ;

// Problem : 1593B
// Platform : Codeforces 

int main() {
                              
    int t ; 
    cin>>t ; 
    while ( t -- ) {
      long long n ; 
      cin>>n ; 
      string s = to_string( n ) ;
      long long mini = INT_MAX ; 
      for ( int i = 0 ; i < s.size() ; i ++ ) {
           if ( s[i] == '2' || s[i] == '7' ) {
               for ( int j = i + 1 ; j < s.size() ; j ++ ) {
                    if ( s[j] == '5' ) {
                        long long del = ( s.size() - j - 1  ) + ( j - i - 1 ) ;
                        mini = min( mini , del ) ;
                    }                        
               }                         
           }
           if ( s[i] == '0' || s[i] == '5' ) {
               for ( int j = i + 1 ; j < s.size() ; j ++ ) {
                    if ( s[j] == '0'  ) {
                        long long del = ( s.size() - j - 1  ) + ( j - i - 1 ) ;
                        mini = min( mini , del ) ;
                    }                        
               }                                                   
           }
      }
      cout<<mini<<endl; 
    }
                              
   return 0 ;
}
