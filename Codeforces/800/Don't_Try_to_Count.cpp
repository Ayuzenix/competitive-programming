#include<bits/stdc++.h>
using namespace std ; 

// Problem : Don't Try to Count 
// Platform : Codeforces

int main() {
   
    int t ; 
    cin>>t ; 
    while ( t -- ) {
        int n , m ; 
        cin>>n>>m ;
        string x , s ; 
        cin>>x ;
        cin>>s ; 
        int count = 0 ;
        bool istrue = true ;   
        while ( x.size() <= ( n * m ) ) {
            for ( int i = 0 ; i < x.size() ; i ++ ) {
                 string curr = "" ;                          
                 for ( int j = i ; j < x.size() ; j ++ ) {
                 curr = curr + x[j] ;
                 if ( curr == s ) {
                     istrue = false ; 
                     break ;
                 }
                 }
                 if ( istrue == false ) {
                     break ;                           
                 }
            }
            if( istrue == false ) {
               break ;                           
            }
            x = x + x ; 
            count ++ ; 
        }
        for ( int i = 0 ; i < x.size() ; i ++ ) {
                 string curr = "" ;                          
                 for ( int j = i ; j < x.size() ; j ++ ) {
                 curr = curr + x[j] ;
                 if ( curr == s ) {
                     istrue = false ; 
                     break ;
                 }
                 }
                 if ( istrue == false ) {
                     break ;                           
                 }
            }
        if ( istrue == false ) {
            cout<<count<<endl ;                           
        } else {
            cout<<-1<<endl ;                         
        }                         
    }
                             
   return 0 ;
}
