
#include<iostream>

using namespace std;
 
 
bool isPalindrome(string str)

{

    int flag = 0;

    for ( int i = 0; i < str.length(); i++ )

    {

        for ( int j = str.length()-1;  j >= 0; j-- )

        {

            if ( str[i] != str[j]) { flag = 1; break; } 

        }

    }

    if ( flag == 1) return true;

    else return false ;

}

int main()

{

    string str ;
	cin >> str;

    for ( int i = 0; i < str.length(); i++ )

    {

        if ( str[i] == 'a') continue;

        else str[i] = 'a' ;

        if ( isPalindrome(str) ) { cout << str; break; }

    }


    return 0;

}