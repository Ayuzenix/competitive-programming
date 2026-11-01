#include<bits/stdc++.h>
using namespace std ;

// Problem : 1679A
// Platform : Codeforces 

int main() {
    
    long long t ;
    cin>>t ; 
    while ( t -- ) {
        long long n ;
        cin>>n ; 
        if ( n % 2 != 0 || ( n <= 2 ) ) {
            cout<<-1<<endl ;
        } else {
            long long maxi , mini ; 
            // for mini 
            long long rem = ( n % 6 ) ;
            if ( rem == 0 ) {
                mini = ( n / 6 ) ;
            } else if ( rem == 2 ) {
                long long extra = ( ( n / 6 ) - 1 ) ;
                if ( extra < 0 ) {
                    extra = 0 ;
                }
                mini = extra + ( ( 6 + 2 ) / 4 ) ;
            } else if ( rem == 4 ) {
                mini = ( n / 6 ) + ( 4 / 4 ) ;
            }
            // for maxi 
            rem = ( n % 4 ) ;
            if ( rem == 0 ) {
                maxi = ( n / 4 ) ;
            } else if ( rem == 2 ) {
                long long extra = ( ( n / 4 ) - 1 ) ;
                if ( extra < 0 ) {
                    extra = 0 ;
                }
                maxi = extra + ( ( 4 + 2 ) / 6 ) ;
            } 
            cout<<mini<<" "<<maxi<<endl ;
        }
    }

    return 0 ;
}
