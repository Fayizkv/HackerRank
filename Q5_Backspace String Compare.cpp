#include<iostream>
#include<string>
using namespace std;
 
string rem( string a)
    {
        int j = 0;
        char temp[a.length()];
          for ( int i = 0; i < a.length(); i ++)
         {
             if ( a[i] != '#' ) {
            temp[j] = a[i];
            j++;
        }
        else { 
            temp[j] = NULL;
            j-- ;}
    }
    return temp ;
    }
 
int main()
{
    string a ;
	cin >> a; 
    string b;
	cin >> b;
    string temp1, temp2;

    if ( rem(a) == rem(b) )
    cout << 1;
    else cout << 0;

    return 0;
}