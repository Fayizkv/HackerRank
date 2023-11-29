
#include<iostream>

#include<vector>

#include<string>

using namespace std;
 
class stack{

    public:

    int size = 0;

    vector<int>ar;

    void push(int) ;

    void pop();

    void printProduct();

    int findBig();

    int findSmall();

};

int main(){

    int n ; cin >> n;

    string st[n];
	for ( int i = 0; i < n; i++ )
		cin >> st[i];
    int x ; cin >> x;

    int ar[n] ;
	for ( int i = 0; i < n; i++) cin >> ar[i];

    stack s;

    for ( int i = 0; i < n ; i++)

    {

       if ( st[i] == "push") s.push(ar[i]);

       else s.pop();

    }

    return 0;

}
 
void stack :: push(int i)   

    {

        ar.push_back(i);

        printProduct();

    }

void stack :: pop()

    {

        ar.erase(ar.begin());

        printProduct();

    }

void stack :: printProduct()

    {

        int max = findBig();

        int min = findSmall();

        cout << max * min << " ";

    }

int stack :: findBig(){

    int big = ar[0];

    for ( int i : ar){

        if (i > big) big = i;

    }

    return big;

}

int stack :: findSmall(){

    int small = ar[0];

    for ( int i : ar){

        if (i < small) small = i;

    }

    return small;

}