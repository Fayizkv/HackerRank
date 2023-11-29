
#include<iostream>

using namespace std;
 
 
int main(){

    int x[3] 
	for ( int i = 0; i < 3; i++ )
		cin >> x[i];

    int y[3]; 
	for ( int i = 0; i < 3; i++ )
		cin >> y[i];

    int base[3] = {1,2,3};

    int flag = 0;

    int b,h;

for ( int i = 0; i <3; i ++ )

    {

        if ( x[i] == x[i+1] ) { 

            base[0] = i; base[1] = i+1; base[2] = i+2; 

            b = abs( x[i] - x[i+2]);

            h = abs ( y[i] - y[i + 1]);

            flag = 1; break;

        }

        else if ( x[i] == x[i+2]) { 

            base[0] = i; base[1] = i+2; 

            base[2] = i+1;

            b = abs( x[i] - x[i+1]);

            h = abs ( y[i] - y[i + 2]);

            flag = 1;

            break ;}

    }

    if ( flag == 0) 

    {

        for ( int i = 0; i <3; i ++ )

    {

        if ( y[i] == y[i+1] ) { 

            base[0] = i; base[1] = i+1; base[2] = i+2; 

            b = abs( y[i] - y[i+2]);

            h = abs ( x[i] - x[i + 1]);

            flag = 1; break;

        }

        else if ( y[i] == y[i+2]) { 

            base[0] = i; base[1] = i+2;

            b = abs( y[i] - y[i+1]);

            base[2] = i+1; 

            h = abs ( x[i] - x[i + 2]);

            flag = 1;

            break ;}

    }

    }

    cout << (b*h)/2 ;

    return 0; 

}