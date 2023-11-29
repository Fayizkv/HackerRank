
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
//#include <vector>

using namespace std;

 int vowel = 0; int conso = 0;
 string consonents;  
 
bool isVowel(char s) {

    if ( s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' )
    return true; 
    else return false ;
}

bool isSimiliar(string str)
{
     for ( int i = 0 ; i < str.length(); i++ )
    {
        if ( isVowel(str[i]) ) vowel++;
        else consonents.push_back(str[i]);

    }
    conso = consonents.length(); 
   
    if ( vowel == conso )  return true ; 
    else return false ;
}

int main() {
  
    string str ; cin >> str;
    
    if ( isSimiliar(str) ) cout << 0;
    else if ( vowel > conso ) cout << (vowel - conso) / 2 ;
    else {
      
       int ar[] = { 'a'-'0','e'-'0','i'-'0', 'o'-'0','u' -'0'} ;
    int br[consonents.length()];
    int n = consonents.length();
    
    for ( int i = 0 ;i < consonents.length() ; i++ )
    {
        if ( consonents[i] == 'a') { br[i] = 4; continue ; }
        if ( consonents[i] == 'z') { br[i] = 5; continue ; }
        int mini = consonents[i] - '0' ;
        for ( int j = 0 ; j < 5; j++ )
        {
           mini = min( mini, abs( consonents[i] - '0' - ar[j] )) ;
           br[i] = mini ;
        }
    }
    sort(br,br+n) ;
    int sum = 0;
    for ( int i = 0; i < (conso - vowel) / 2; i++ )
    {
        sum += br[i] ;
    }
        cout << sum ;
    }
    

    return 0;
}