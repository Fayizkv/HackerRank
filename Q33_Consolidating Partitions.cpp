#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,i,z,sum = 0,count =0;
    vector<int>used;
    vector<int>capacity;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>z;
        used.push_back(z);
    }
    for(i=0;i<n;i++){
        cin>>z;
        capacity.push_back(z);
    }
    sort(capacity.begin(),capacity.end(),greater<>());
    for(i=0;i<n;i++){
        sum += used[i];
    }
    i=0;
    while(sum>0){
        sum =sum-capacity[i];
        i++;
        count++;
    }
    cout<<"Output :"<<count;
    return 0;

}