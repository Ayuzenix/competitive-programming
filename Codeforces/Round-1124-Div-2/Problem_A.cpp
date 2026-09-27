#include<bits/stdc++.h>
using namespace std ;

// Problem : SauSaGe Bank 

int main() {
    int t ;
    cin>>t ;
    while ( t -- ) {
        int n , k ;
        cin>>n >>k ;
        int total = 0 ;
        int curr = 1 ; 
        while ( k > 1 ) {
            total = total + 2 ; 
            k -- ;
            n -- ;
        }
        while ( n > 0 ) {
            curr = ( curr * 2 ) ;
            n -- ;
        }
        total = total + curr ; 
        cout<<total<<endl ;
    }
            
   return 0 ;
}
