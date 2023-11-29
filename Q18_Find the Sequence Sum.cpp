
#include<iostream>

using namespace std;
 
int main(){

    int sum = 0;

    int a ; cin >> a;

    int b ; cin >> b;

    int c ; cin >> c; 

    for (int i = a; i <=b; i++)

    sum += i;

    for ( int i = b-1 ; i >=c; i--)

    sum += i;

    cout << sum;

    return 0;

}