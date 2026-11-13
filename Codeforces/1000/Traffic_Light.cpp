#include<bits/stdc++.h>
using namespace std ; 

// Problem : 1744C
// Platform : Codeforces 

int main() {
                              
    int t ;
    cin>>t ; 
    while ( t -- ) {
        int n ;
        char c ; 
        cin>>n>>c ; 
        string str ; 
        cin>>str ; 
        str = ( str + str ) ;
        int l = 0 , r = 0 ; // r -->> green l -->> char 
        int maxi = INT_MIN ; 
        while ( r < ( 2 * n ) ) {
           while ( ( r < 2 * n ) && str[r] != 'g' ) {
                r ++ ;                          
           } 
           while ( ( l < r ) && str[l] != c ) {
                l ++ ;                          
           }
           if ( l == r  ) {
               if ( str[l] == c ) {                        
               maxi = max( maxi , ( r - l ) ) ;
               }
           } else {
               maxi = max( maxi , ( r - l ) ) ;                          
           }
           r = r + 1 ; 
           l = r ; 
        }
        cout<<maxi<<endl ;                         
    }
                              
    return 0 ; 
}
