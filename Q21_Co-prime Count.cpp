#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int n ;
	cin >> n;
    int ar[n] ;
	for ( int i = 0; i < n; i++ )
		cin >> ar[i];

    int count ;
    for ( int i = 0 ; i < n; i++ )
    {
        count = 0;
        for ( int j = 1; j < ar[i] ; j++)
        {
            if ( __gcd(ar[i],j) == 1) count++ ;
        }
        cout << count << "  " ;
    }
    return 0;
}