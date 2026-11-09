#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1913B
// Platform : Codeforces 

int main() {
                              
    int t ;
    cin>>t ; 
    while ( t -- ) {
       string s ; 
       cin>>s ; 
       int c0 = 0 , c1 = 0 ; 
       for ( int i = 0 ; i < s.size() ; i ++ ) {
            if ( s[i] == '0' ) {
                c0 ++ ;                          
            } else {
                c1 ++ ;                            
            }                         
       }
       if ( c0 == 0 || c1 == 0 ) {
           cout<<s.size()<<endl ;                    
       } else {
           if ( c0 <= c1 ) {
           int nc = 0 , idx = 0 ; 
           while ( nc != c0 && idx < s.size() ) {
             if ( s[idx] == '1' ) {
                 nc ++ ;                           
             }
             idx ++ ; 
           }
           while ( idx < s.size() && s[idx] == '0' ) {
               idx ++ ;                           
           }
           cout<<( s.size() - idx )<<endl ; 
        } else {
           int nc = 0 , idx = 0 ; 
           while ( nc != c1 && idx < s.size() ) {
             if ( s[idx] == '0' ) {
                 nc ++ ;                           
             }
             idx ++ ; 
           }
           while ( idx < s.size() && s[idx] == '1' ) {
               idx ++ ;                           
           }
           cout<<( s.size() - idx )<<endl ;  
        }
       }
    }
                              
    return 0 ; 
}
