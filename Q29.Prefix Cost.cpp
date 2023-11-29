
#include <iostream>

#include <algorithm>

#include <bits/stdc++.h>

#include <set>

using namespace std;
 
int checkPrefix(int start, int stop, int arr[]){
 
    set<int>temp;

    for ( int i = start; i <= stop; i++) temp.insert(arr[i]);

       return temp.size();

}
 
int findPermutations(int arr[], int n){

    int sum = 0; int smallest = 999999;

    do { 

        for ( int i = 0; i < n; i++ ) sum += checkPrefix(0,i,arr);

        if ( sum < smallest ) smallest = sum;

        sum = 0;

  } while (next_permutation(arr, arr + n));


    return smallest;

}

int main() {

    int n ; cin >> n;

    int arr[n] ;

	for ( int i = 0; i < n; i++ ) cin >> arr[i];

    sort(arr, arr + n);

    int sum = 0;

 
    

    cout << findPermutations(arr,n);

    return 0;

}