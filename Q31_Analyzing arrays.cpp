
#include <iostream>

#include <cmath>
 
using namespace std;
 
 
int main() {

    int n ; cin >> n;
	int ar[n];

	for ( int i = 0; i < n ; i++ ) cin >> ar[i];


    int big = 0; int index = 0;

    for ( int i = 0; i < n-1; i++)

    {

        int temp = pow( ar[i], ar[i+1] ) ;

        int temp1 = ( pow(10,9) + 7 ) ;

        int temp2 = temp % temp1;


      if ( big < temp2 ) { big = temp2; index = i; }

       cout << temp2 << " " << index <<  endl;

    }

    cout << index+1;

    return 0;

}