#include <iostream>
using namespace std;
int main();
 
int main() {
    int n;
	cin >> n;
    string str[n];
	for ( int i = 0; i < n; i++ )
		cin >> str[i];    
    int flag = 0; 
    string temp ;
    int arr[] = {0,0};
    int tem[2];
    //count = 0;
    for ( int i = 0; i < n; i++)
    {
        temp = str[i] ;
        arr[0] = temp[1] - temp[0];
        arr[1] = temp[2] - temp[1];

        if ( i != 0 )
        {
            if ( tem[0] != arr[0] || tem[1] != arr[1] ) flag = 1;
        }
        if ( flag == 1) break;
        tem[0] = arr[0];
        tem[1] = arr[1] ;
    }
    if (flag == 1) cout << temp ;
    return 0;
}