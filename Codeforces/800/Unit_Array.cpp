#include<bits/stdc++.h>
using namespace std ;

// Problem : 1834A 
// Platform : Codeforces 

int main() {
   
   int t ; 
   cin>>t ; 
   while ( t -- ) {
       int n ; 
       cin>>n ;
       vector<int>store( n ) ;
       int countNeg = 0 , countPos = 0 ; 
       for ( int i = 0 ; i < n ; i ++ ) {
            cin>>store[i] ;
            if ( store[i] > 0 ) {
                countPos ++ ;                          
            } else {
                countNeg ++  ;                          
            }
       }
       if ( countNeg <= countPos ) {
           if ( countNeg % 2 == 0 ) {
               cout<<0<<endl ;                          
           } else {
               cout<<1<<endl ;                          
           }                          
       } else {
           int x ; 
           if ( ( countNeg - countPos ) % 2 == 0 ) {
               x = ( ( countNeg - countPos ) / 2 ) ;
           } else {
               x = ( ( countNeg - countPos ) / 2 ) + 1 ; 
           }
           countNeg = countNeg - x ; 
           if ( countNeg % 2 != 0 ) {
               x ++ ;                      
           }
           cout<<x<<endl ;
       }
   }
                           
   return 0 ;
}
