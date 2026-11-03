#include<bits/stdc++.h>
using namespace std ;

// Problem : 1606A
// Platform : Codeforces 

int main() {
   
   int t ;
   cin>>t ; 
   while ( t -- ) {
       string s ; 
       cin>>s ; 
       int n = s.size() ; 
       if ( s[0] == s[n-1] ) {
           cout<<s<<endl ;                          
       } else {
          if ( s[0] == 'a' ) {
              s[n-1] = 'a' ;                          
          } else {
              s[n-1] = 'b' ;                           
          }  
          cout<<s<<endl ;
       }
       
   }
                              
   return 0 ;
}
