[19-10 17:01] Muhammed Fayiz K V
#include <iostream>

#include <string>

using namespace std;
 
bool findSum(string temp)

{

    int sum = 0;

    for ( int i = 0; i < temp.length(); i++)

    sum += ( (temp[i] - 96) / 3) + 1 ;

    if ( sum % temp.length() == 0 ) return true;

}

int main() {

    string str ;
	cin >> str; 

    string temp ;

    int result = 0;

    for ( int i = 0; i < str.length(); i++ )

    {

        for ( int j = 1; j <=str.length()-i; j++)

        {

            temp = str.substr(i,j) ;

            if ( findSum(temp) ) result++ ;

            //cout << str.substr(i,j) << endl;

        }

    }

    cout << result ;
 
    return 0;

}