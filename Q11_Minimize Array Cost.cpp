#include<iostream>
using namespace std;
 
int main(){
    int n ;
	cin >> n;
    int ar[n];
	for ( int i = 0; i < n; i++ ) cin >> ar[i];

    int big = 0;
    int sum = 0;
    int index;
    int diff[n-1];
    for ( int i = 0; i < n-1 ; i++ )
    {
        diff[i] = abs(  ar[i] - ar[i+1] ) ;
        if ( big < diff[i]) {  big = diff[i] ; index = i; }
    }
    for ( int i = 0; i < n-1 ; i++ )
    {
        if ( i == index ) {
            sum +=  ((diff[i]+1)/2) * ((diff[i]+1)/2);
            sum +=  ((diff[i]+1)/2) * ((diff[i]+1)/2);
            continue; } 
        sum += diff[i]*diff[i];
    }
    cout << endl << sum ;
    return 0;
}