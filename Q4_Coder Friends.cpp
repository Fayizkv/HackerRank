[10-10 13:49] Muhammed Fayiz K V
// Online C++ compiler to run C++ program online

#include <iostream>

#include <string>

using namespace std;
 
int scores ( char diff)

{

    if ( diff == 'E') return 1;

    if ( diff == 'M') return 3;

    if ( diff == 'H') return 5;

}

int main() {

   string eric ;
	cin >> eric; = 

   string bob ;
	cin >> bob ;

   int score[2];

   score[0] = 0;

   score[1] = 0;

   for ( int i = 0 ;i < eric.length(); i++ )

   {

       score[0] += scores(eric[i]);

       score[1] += scores(bob[i]);

   }

    cout << score[0] << " " << score[1] ;

    return 0;

}