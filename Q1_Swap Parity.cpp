
#include <iostream>
using namespace std;
int main() {
    
    string s ;
    bool flag = 0;
   cin >> s;

       do {
        flag = 0;
       for(int j=0;j<s.length()-1;j++)
       {
      if( (s[j] % 2 == 0 && s[j+1] % 2 == 0) || (s[j] % 2 == 1 && s[j+1] % 2 == 1) )
       {
            if ( s[j]<s[j+1] ) 
           {
               flag = 1;
               char temp=s[j];
               s[j]=s[j+1];
               s[j+1]=temp;
           }
       }
       } } while ( flag == 1);
    cout<<s;
    return 0;
}