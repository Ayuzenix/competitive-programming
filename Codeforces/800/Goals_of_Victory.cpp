#include<bits/stdc++.h>
using namespace std ; 

// Problem : Goals of Victory 
// Platform : Codeforces 

int main() {
    
    int t ; 
    cin>>t ;
    while ( t -- ) {
        long long n ;
        cin>>n ; 
        vector<long long>store( n - 1 ) ; // Contains n - 1 which depicts efficiency of ( n - 1 ) teams  
        long long sum = 0 ;
        for ( int i = 0 ; i < store.size() ; i ++ ) {
             cin>>store[i] ;
             sum = sum + store[i] ;
        }
        cout<<( -sum )<<endl ;
    }

    return 0 ;
}
