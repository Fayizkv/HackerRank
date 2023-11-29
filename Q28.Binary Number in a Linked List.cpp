
// Online C++ compiler to run C++ program online

#include <iostream>

#include <list>

#include <math.h>

using namespace std;
 
int main() {

    list<int>link;

    int sum = 0;

    int n = 7;
	
	for ( int  i = 0; i < n; i++ )
		{ cin >> a;  link.insert(a); }

    auto it = link.begin();

    for ( int i = n-1; i > 0; i-- )

    {

        sum += *it * pow(2,i);

        it++;

    }

    cout << sum ;
 
    return 0;

}