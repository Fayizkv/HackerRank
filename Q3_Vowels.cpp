#include <iostream>

#include <string>

using namespace std;
 
bool isvowel(string str)

{

    if ( (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') && (str[str.length()-1] == 'a' || str[str.length()-1] == 'e' || str[str.length()-1] == 'i' || str[str.length()-1] == 'o' || str[str.length()-1] == 'u'))

    { return true; }

    else return false;

}

int findvowel(string str)

{ 

    int count = 0;

    if( isvowel(str) ) {

        count++;

    }

    return count ;

}
 
int main() {

   int n ;
	cin >> n;

   int q ;
	cin >> q;

   int start,end, count;

   string temp ;

   string str[n] ;

	for ( int i = 0; i < n; i++ )
		cin >> str[i];

  string qry[q] ;

	for ( int i = 0; i < q; i++ )
		cin >> qry[i];


   

  for ( int i = 0; i < q; i++ )

  {

         temp = qry[i];
 
         start = temp[0] - '0';

         end = temp[2] - '0' ;

        // cout << start << " " << end << endl;

         count = 0;

         for ( int i = start-1 ; i < end; i++ )

         {

             temp = str[i];

             count += findvowel(temp) ;  

         }

        cout << count << endl;

  }
 
    return 0;

}