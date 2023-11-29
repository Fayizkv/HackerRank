
#include<iostream>

#include<set>
 
using namespace std;
 
bool isOnSet(set<int>temp,int ele)

{

    bool flag = 0;

    for ( int i : temp )

    {

        if ( ele == i) { flag = 1; break; }

    }

    if ( flag == 0) return true;

}
 
int findDistinct( int a[], int b[], int n, int k)

{

    set<int>temp;

    int count = 0;

    for ( int i = 0; i < n ; i++ )

    {

        temp.insert(a[i]) ;

    }

    if ( temp.size() == n ) { return n; }

    else

    {

    for ( int i = 0; i < n; i++ ){

        if( isOnSet(temp, b[i]) )

        { temp.insert(b[i]); count++; }

        if ( count == k) break;

    }

    return temp.size()+1;

    }



}
 
int main()

{

    int n ; cin >> n;
	int a[n]; int b[n];
	
	for ( int i = 0; i < n ; i++ ) cin >> a[i];
	for ( int i = 0; i < n ; i++ ) cin >> b[i];
 

    int k = 1;

    cout << findDistinct(a,b,n,k);

return 0;   

}
