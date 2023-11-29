
#include<iostream>
 
#include<string>
 
using namespace std;
 
 
int main(){
 
 
    string str ;
	cin >> str;
 
    int count = 0;
 
    int k; cin >> k;
 
    string str2[str.length() * str.length()];
 
 
    for ( int i = 0; i < str.length(); i++ )
 
    {
 
        for ( int j = i  ; j < str.length(); j++ )
 
        {
 
            str2[count] = str.substr(i,j+1) ;
 
            count++ ;
 
 
        }
 
 
    }
 
 
    int oCount;
 
    string temp ;
 
    int small = 0 ;
 
    for ( int i = 0 ; i < count; i++ )
 
    {
 
        oCount = 0;
 
        temp = str2[i] ;
 
        for ( int j = 0; j < temp.length() ; j++ )
 
        {
 
            if ( temp[j] == '1') {
 
                oCount++;
 
            }
 
 
        }
 
        if ( oCount == k ) { 

            cout << temp << " " << str2[small] << endl ;

        if ( str2[small].length() > temp.length() ) { small = i; }

        if ( str2[small] < temp) { small = i ;  }

        //cout << temp << " " << str2[small] << endl ;
 
        }
 
    }
 
 
    cout << str2[small] ;
 
    return 0;
 
}