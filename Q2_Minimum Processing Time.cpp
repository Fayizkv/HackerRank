#include <iostream>

#include<algorithm>
 
using namespace std;

int main() {

    int npro ;
	cin >> npro;

    int pro[2] ;

	for ( int i = 0; i < npro ; i++ )
		cin >> pro[i];

    int ntasks ;
	cin >> ntasks;

	
	for ( int i = 0; i < ntasks ; i++ )
		cin >> tasks[i];

    int tasks[] = {2,3,1,2,5,8,4,3} ;


    sort(tasks, tasks+ntasks);

    sort(pro,pro+npro) ;

    int j = ntasks-1;

    int max = 0;

    int s;

    for ( int i = 0; i < npro ; i++ )

    {

        s = pro[i] + tasks[j];

        j = j - 3;

        if ( s > max ) max = s;

    }

    cout << max;

    return 0;

}
